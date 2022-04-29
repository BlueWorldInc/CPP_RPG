@echo off
echo Compiling...
g++ -c .\ZFraction.cpp -o ZFraction.o && g++ -c .\main.cpp -o .\main.o ^
 && g++ .\ZFraction.o .\main.o -o main.exe ^
 && powershell write-host -fore Green Compile success && .\main.exe
