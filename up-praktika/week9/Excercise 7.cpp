#include <iostream>

const int MAX_SIZE = 365;

void formatText(char* text)
{
    int missedSymbols = 0;
    int pos = 0;
    char currChar = 0;

    while (text[pos] != '\0')
    {
        currChar = text[pos + missedSymbols];

        if (currChar >= 'A' && currChar <= 'Z')
        {
            text[pos++] = currChar + ('a' - 'A');
        }
        else if (currChar >= 'a' && currChar <= 'z')
        {
            text[pos++] = currChar - ('a' - 'A');
        }
        else if (currChar >= '0' && currChar <= '9')
        {
            text[pos++] = '#';
        }
        else if (currChar == '\0')
        {
            text[pos] = currChar;
        }
        else
        {
            missedSymbols++;
        }
    }

    std::cout << text << std::endl;
}

int main()
{
    char text[MAX_SIZE];
    std::cin.getline(text, MAX_SIZE);

    formatText(text);

    return 0;
}

