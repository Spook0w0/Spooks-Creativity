@echo off
color 0a
cd ..
echo BUILDING GAME
haxelib run lime config hxcpp HXCPP_M32 true
lime build windows -32 -release -D 32bits
echo.
echo done.
pause
pwd
explorer.exe export\32bit\windows\bin