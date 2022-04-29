@echo off
echo Compiling...
g++ -c .\Personnage.cpp -o Personnage.o && g++ -c .\Guerrier.cpp -o Guerrier.o && g++ -c .\Magicien.cpp -o Magicien.o ^
 && g++ -c .\MagicienBlanc.cpp -o MagicienBlanc.o && g++ -c .\MagicienNoir.cpp -o MagicienNoir.o ^
 && g++ -c .\main.cpp -o .\main.o && g++ .\Personnage.o .\main.o  .\Magicien.o .\Guerrier.o .\MagicienNoir.o .\MagicienBlanc.o -o main.exe ^
 && powershell write-host -fore Green Compile success && .\main.exe
