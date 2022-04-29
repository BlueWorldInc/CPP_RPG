@echo off
echo Compiling...
g++ -c .\Vehicule.cpp -o Vehicule.o ^
 && g++ -c .\main.cpp -o .\main.o && g++ .\Vehicule.o .\main.o -o main.exe ^
 && powershell write-host -fore Green Compile success && .\main.exe
