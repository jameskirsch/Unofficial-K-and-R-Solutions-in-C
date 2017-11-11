// https://github.com/jameskirsch -- https://www.linkedin.com/in/james-kirsch-055025ab

// Coding Challenge from the K&R Classic - C Programming
// K&R Exercise 1-8

// "Write a program to count blanks, tabs, and newlines"

#include <stdio.h>

main()
{
    int tabCount = 0;
    int spaceCount = 0;
    int newLineCount = 0;
    int character;

    while((character = getchar()) != EOF)
    {
        if(character == ' ')
        {
            ++spaceCount;
        }

        if(character == '\t')
        {
            ++tabCount;
        }

        if(character == '\n')
        {
            ++newLineCount;
        }

        printf("\n%s\%d", "Blank Space Count: ", spaceCount);
        printf("\n%s\%d", "Tab Count ", tabCount);
        printf("\n%s\%d\n\n", "New Line Count: ", newLineCount);
    }
}
