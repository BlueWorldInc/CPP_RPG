@echo off
echo Compiling...
g++ -c .\Duree.cpp -o Duree.o && g++ -c .\main.cpp -o .\main.o && g++ .\Duree.o .\main.o -o duree.exe ^
 && powershell write-host -fore Green Compile success && .\duree.exe