@echo off
set PROJECT_ROOT=%~dp0
IF NOT EXIST "%~dp0..\BRB" GOTO :ABSOLUTE
call %~dp0..\BRB\SetProject_PromptAdmin.bat %0
GOTO :END
:ABSOLUTE
call %BRB_TOOLS%\..\SetProject_PromptAdmin.bat %0
:END
