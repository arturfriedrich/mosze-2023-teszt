#include <iostream>

const int N_ELEMENTS = 100;  // Use 'const' instead of 'constexpr'

int main()
{
    int *b = new int[N_ELEMENTS];  // Corrected the variable name to match N_ELEMENTS.
    std::cout << "1-100 ertekek duplazasa";  // Corrected single quotes to double quotes for the string literal.
    for (int i = 0; i <= N_ELEMENTS; i++)  // Added the loop condition and removed the extra semicolon.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i <= N_ELEMENTS; i++)  // Corrected the loop condition to iterate N_ELEMENTS times.
    {
        std::cout << b[i] << std::endl;  // Added the missing semicolon at the end of the line.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;  // Initialized 'atlag' to 0.
    for (int i = 0; i < N_ELEMENTS; i++)  // Replaced the comma with a semicolon in the loop condition.
    {
        atlag += b[i];  // Added the missing semicolon at the end of the line.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}