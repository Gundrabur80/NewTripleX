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
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << "Summe: " << sum << std::endl;
    std::cout << "Produkt: " <<  product << std::endl;

    return 0;
}