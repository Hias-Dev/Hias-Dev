// Ratespiel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

int main()
{
    srand(time(NULL));
    int min = 1;
    int max = 10;
    int secretNum = min;
    std::string answer;
    

    int guess = 0;
    int i;

    std::cout << "#############\n#           #\n# RATESPIEL #\n#           #\n#############\n\n";

    std::cout << "Gib eine Zahl von 0 bis 10 ein: " << std::endl;
    
    do
    {
        secretNum = (std::rand() % (max - min + 1));

        for (i = 1; i < 4; i++)
        {
            std::cout << i << ". Versuch\n";
            std::cin >> guess;
            std::cout << std::endl;

            if (secretNum == guess)
            {
                std::cout << "Super, Du hast gewonnen!\n\n";
                std::cout << "Die richtige Nummer ist: " << secretNum << "\n\n";
                break;               
            }
            else if (i == 2)
            {
                std::cout << "Leider falsch, letzte Chance\n\n";
            }
            else if (i == 3)
            {
                std::cout << "Schade, Du hast verloren.\n";
                std::cout << "Die richtige Nummer lautete: " << secretNum << "\n\n";
            }
            else
            {
                std::cout << "Leider falsch\n\n";
            }
        }

        std::cout << "Moechtest Du nochmal raten?\n";
        std::cout << "Tippe J oder N: ";

        std::cin >> answer;
        std::cout << std::endl;

    } while (answer == "J" || answer == "j");

    return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
