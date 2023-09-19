// Kommentelt

#include <iostream>

constexpr int N_ELEMENTS = 100;  // constexpr is not existing

int main()
{
    int *b = new int[NELEMENTS];  // Comment: Variable name should match the constexpr variable name (N_ELEMENTS).
    std::cout << '1-100 ertekek duplazasa'  // Comment: Single quotes should be double quotes for string literals.
    for (int i = 0;)  // Comment: The for loop has a missing condition and an extra semicolon.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // Comment: The second for loop condition (i) is always false, it should be i < N_ELEMENTS.
    {
        std::cout << "Ertek:"  // Comment: Missing semicolon at the end of this line.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)  // Comment: The comma should be a semicolon in the for loop condition.
    {
        atlag += b[i]  // Comment: Missing semicolon at the end of this line.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}