#include <iostream>

int main()
{
    // Print Welcome Message to the terminal
    std::cout << "I------------------------------ T R I P L E X ---------------------------------I";
    std::cout << std::endl;
    std::cout << "I                                                                              I";
    std::cout << std::endl;
    std::cout << "I  Du bist ein Geheimagent, der in einen Serverraum einbrechen will!           I";
    std::cout << std::endl;
    std::cout << "I  Du musst den korrekten Code eingeben um in das folgende Level vorzudringen! I";
    std::cout << std::endl;
    std::cout << "I                                                                              I";
    std::cout << std::endl;
    std::cout << "I------------------------------------------------------------------------------I";
    std::cout << std::endl;
    std::cout << std::endl;

    // declarde 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "+ Es gibt drei Nummern im Code!" << std::endl;
    std::cout << "+ Der Code hat die Summe: " << CodeSum << std::endl;
    std::cout << "+ Das Produkt des Codes ist: " <<  CodeProduct << std::endl;

    // Declaring the variables for the guesses of the code and asking fo the input
    int GuessA, GuessB, GuessC;
    std::cout << std::endl;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}