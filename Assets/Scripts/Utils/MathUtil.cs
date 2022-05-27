using UnityEngine;
using UnityEditor;

namespace Tapestry
{

    public class MathUtil
    {
        /// <summary>
        /// Solve a quadratic equation in the form ax^2 + bx + c = 0
        /// </summary>
        /// <param name="a">Coefficient for x^2</param>
        /// <param name="b">Coefficient for x</param>
        /// <param name="c">Constant</param>
        /// <param name="solution1">The first solution</param>
        /// <param name="solution2">The second solution</param>
        /// <returns>TRUE if a solution exists, FALSE if one does not</returns>
        public static bool QuadraticSolver(float a, float b, float c, out float solution1, out float solution2)
        {
            if (a == 0)
            {
                if (b == 0)
                {
                    solution1 = solution2 = float.NaN;
                    return false;
                }
                else
                {
                    solution1 = solution2 = -c / b;
                    return true;
                }
            }

            float tmp = b * b - 4 * a * c;
            if (tmp < 0)
            {
                solution1 = solution2 = float.NaN;
                return false;
            }

            tmp = Mathf.Sqrt(tmp);
            float _2a = 2 * a;
            solution1 = (-b + tmp) / _2a;
            solution2 = (-b - tmp) / _2a;
            return true;
        }

        // Calculates a 2D position on a parabola from point to point interpolated from 0 to 1
        public static Vector2 ParabolaFromPointToPoint(Vector2 start, Vector2 end, float interp)
        {
            float dist = (end - start).magnitude;
            if (dist == 0)
            {
                return start;
            }
            else if (interp > 1.0f)
            {
                return end;
            }

            Vector2 dir = (end - start).normalized;
            float angle = Mathf.Atan2(dir.y, dir.x);
            float x = interp * dist;
            float y = Mathf.Sin((x * Mathf.PI) / dist);

            // rotate the solution about the angle
            Vector2 ret = start + new Vector2(x * Mathf.Cos(angle) - y * Mathf.Sin(angle), x * Mathf.Sin(angle) + y * Mathf.Cos(angle));
            return ret;
        }
    }
}