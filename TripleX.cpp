#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Print Welcome Message to the terminal
    std::cout << "\n\nI------------------------------ T R I P L E X ---------------------------------I\n";
    std::cout << "I                                                                              I\n";
    std::cout << "I  Du bist ein Geheimagent, der in einen Serverraum einbrechen will!           I\n";
    std::cout << "I  Du musst den korrekten Code eingeben um in das n\204chste Level vorzudringen!  I\n";
    std::cout << "I  Du bist auf Level: " << Difficulty << "                                                        I\n";
    std::cout << "I                                                                              I\n";
    std::cout << "I------------------------------------------------------------------------------I\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // declarde 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "+ Es gibt drei Nummern im Code!\n";
    std::cout << "+ Der Code hat die Summe: " << CodeSum;
    std::cout << "\n+ Das Produkt des Codes ist: " <<  CodeProduct << std::endl;

    // Declaring the variables for the guesses of the code and asking fo the input
    int GuessA, GuessB, GuessC;
    std::cout << std::endl;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nDu hast eine Datei geladen! Weiter so!\n";
        return true;
    }
    else
    {
        std::cout << "\nDein Code war leider falsch. Vorsicht Agent! Versuch es noch mal!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    

    while (LevelDifficulty <= MaxDifficulty) // Loop the game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    
    std::cout << "Gratuliere! Du hast es geschafft! Alle Dateien sind geladen! Jetzt verschwinde sofort!";

    return 0;
}