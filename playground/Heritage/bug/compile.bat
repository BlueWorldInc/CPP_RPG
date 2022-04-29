@echo off
echo Compiling...
g++ -c .\Personnage.cpp -o Personnage.o && g++ -c .\Guerrier.cpp -o Guerrier.o ^
 && g++ -c .\main.cpp -o .\main.o && g++ .\Personnage.o .\main.o -o main.exe ^
 && powershell write-host -fore Green Compile success && .\main.exe
