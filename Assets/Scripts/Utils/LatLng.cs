using System;
using UnityEngine;

namespace Tapestry
{
    // Structure to store Lat/Lng pairs as doubles.
    public struct LatLng
    {
        public const double EARTH_RADIUS_METERS = 6371000.0;
        public double lat;
        public double lng;
        public LatLng(double inLat, double inLng)
        {
            lat = inLat;
            lng = inLng;
        }
        public static LatLng operator *(LatLng a, float scalar)
        {
            return new LatLng(a.lat * scalar, a.lng * scalar);
        }
        public static LatLng operator +(LatLng a, LatLng b)
        {
            return new LatLng(a.lat + b.lat, a.lng + b.lng);
        }
        public static LatLng operator -(LatLng a, LatLng b)
        {
            return new LatLng(a.lat - b.lat, a.lng - b.lng);
        }
        public static bool operator ==(LatLng a, LatLng b)
        {
            return (a.lat == b.lat) && (a.lng == b.lng);
        }
        public static bool operator !=(LatLng a, LatLng b)
        {
            return !(a == b);
        }
        public static explicit operator LatLng(Mapbox.Utils.Vector2d other)
        {
            return new LatLng(other.x, other.y);
        }
        public override string ToString()
        {
            return String.Format("[{0},{1}]", lat, lng);
        }
        public override bool Equals(object o)
        {
            if (GetType() != o.GetType())
            {
                return false;
            }
            LatLng other = (LatLng)o;
            return (lat == other.lat) && (lng == other.lng);
        }
        public override int GetHashCode()
        {
            // Solution based on: http://stackoverflow.com/questions/5059994/custom-type-gethashcode
            unchecked // This keyword supresses integer overflow warnings
            {
                int result = 37; // prime
                result *= 397; // also prime
                result += lat.GetHashCode();
                result *= 397;
                result += lng.GetHashCode();
                return result;
            }
        }

        // Move the current position by some distance in a direction in degrees
        public void MovePosition(double dist, double dirDegrees)
        {
            GetPointAtDistance(lat, lng, dist, dirDegrees, out lat, out lng);
        }


        /// <summary>
        /// Gets the distance between two LatLngs in meters.
        /// </summary>
        public double GetDistance(LatLng to)
        {
            return GetDistance(this, to);
        }

        /// <summary>
        /// Gets the distance between two LatLngs in meters.
        /// </summary>
        public static double GetDistance(LatLng l1, LatLng l2)
        {
            return GetDistance(l1.lat, l1.lng, l2.lat, l2.lng);
        }

        /// <summary>
        /// Gets the distance between two LatLngs in meters.
        /// </summary>
        public static double GetDistance(Mapbox.Utils.Vector2d l1, Mapbox.Utils.Vector2d l2)
        {
            return GetDistance(l1.x, l1.y, l2.x, l2.y);
        }

        public static void ToMercator(double lat, double lng, out double x, out double z)
        {
            double radius = 32768.0 * 256.0 / (2.0 * Mathf.PI);
            x = radius * (lng * Mathf.Deg2Rad + Mathf.PI);
            z = (Mathf.PI - Math.Log(Math.Tan((45.0 + lat * 0.5) * Mathf.Deg2Rad))) * radius;
        }

        public static void MercatorToLatLng(double x, double z, out double lat, out double lng)
        {
            double radius = 32768.0 * 256.0 / (2.0 * Mathf.PI);
            lng = ((x / radius) - Mathf.PI) * Mathf.Rad2Deg;
            lat = ((Math.Atan(Math.Exp(-((z / radius) - Mathf.PI))) * Mathf.Rad2Deg) - 45.0) * 2.0;
        }

        /// <summary>
        /// Compute the distance in meters between two points on the surface of the globe using
        /// Haversine formula.
        /// See http://en.wikipedia.org/wiki/Haversine_formula for more information.
        /// </summary>
        public static double GetDistance(double lat1, double lng1, double lat2, double lng2)
        {
            double fromLatRad = Mathf.Deg2Rad * lat1;
            double fromLngRad = Mathf.Deg2Rad * lng1;
            double toLatRad = Mathf.Deg2Rad * lat2;
            double toLngRad = Mathf.Deg2Rad * lng2;
            double dlat = Math.Sin(0.5 * (toLatRad - fromLatRad));
            double dlng = Math.Sin(0.5 * (toLngRad - fromLngRad));
            double x = dlat * dlat + dlng * dlng * Math.Cos(fromLatRad) * Math.Cos(toLatRad);
            double angle = 2 * Math.Atan2(Math.Sqrt(x), Math.Sqrt(Math.Max(0.0, 1.0 - x)));
            double distance = angle * EARTH_RADIUS_METERS;
            return distance;
        }

        /// <summary>
        /// Compute a position distance and orientation from start point
        /// Haversine formula.
        /// See http://en.wikipedia.org/wiki/Haversine_formula for more information.
        /// </summary>
        public static void GetPointAtDistance(double lat1, double lng1, double dist, double dirDegrees, out double lat2, out double lng2)
        {
            double fromLatRad = Mathf.Deg2Rad * lat1;
            double fromLngRad = Mathf.Deg2Rad * lng1;
            double offset = dist / EARTH_RADIUS_METERS;
            double orient = Mathf.Deg2Rad * dirDegrees;
            lat2 = Math.Asin(Math.Sin(fromLatRad) * Math.Cos(offset) + Math.Cos(fromLatRad) * Math.Sin(offset) * Math.Cos(orient));
            lng2 = fromLngRad + Math.Atan2(Math.Sin(orient) * Math.Sin(offset) * Math.Cos(fromLatRad),
              Math.Cos(offset) - Math.Sin(fromLatRad) * Math.Sin(lat2));
            lat2 *= Mathf.Rad2Deg;
            lng2 *= Mathf.Rad2Deg;
        }

        /// <summary>
        /// Quick lerp between two LatLngs. Used for player movement, so that map
        /// offset doesn't affect placement.
        /// </summary>
        /// <param name="from"></param>
        /// <param name="to"></param>
        /// <param name="t"></param>
        /// <returns></returns>
        public static LatLng Lerp(LatLng from, LatLng to, float t)
        {
            double lat = (to.lat - from.lat) * t + from.lat;
            double lng = (to.lng - from.lng) * t + from.lng;
            return new LatLng(lat, lng);
        }

        public static LatLng Zero
        {
            get
            {
                return new LatLng(0, 0);
            }
        }

        /// <summary>
        /// Gets the bearing from this LatLong to argument LatLong in degrees.
        /// </summary>
        public double GetBearing(LatLng to)
        {
            return GetBearing(this, to);
        }

        /// <summary>
        /// Gets the bearing from LatLng 1 to LatLong 2 in degrees.
        /// </summary>
        public static double GetBearing(LatLng l1, LatLng l2)
        {
            return GetBearing(l1.lat, l1.lng, l2.lat, l2.lng);
        }

        /// <summary>
        /// Compute the bearing from LatLng 1 to LatLong 2 in degrees on the surface of the globe
        /// using a standard great circle path formula.
        /// </summary>
        public static float GetBearing(double lat1, double lng1, double lat2, double lng2)
        {
            float fLat1 = (float)lat1;
            float fLng1 = (float)lng1;
            float fLat2 = (float)lat2;
            float fLng2 = (float)lng2;
            float fLon = (float)(fLng2 - fLng1);

            float y = Mathf.Sin(fLon) * Mathf.Cos(fLat2);
            float x = Mathf.Cos(fLat1) * Mathf.Sin(fLat2) - Mathf.Sin(fLat1) * Mathf.Cos(fLat2) * Mathf.Cos(fLon);

            float brng = Mathf.Atan2(y, x);

//             brng = Mathf.Rad2Deg * brng;
//             brng = (brng + 360) % 360;
//             brng = 360 - brng; // count degrees counter-clockwise - remove to make clockwise

            return 360 - ((Mathf.Rad2Deg * brng + 360) % 360);
        }
    }
}  // namespace
