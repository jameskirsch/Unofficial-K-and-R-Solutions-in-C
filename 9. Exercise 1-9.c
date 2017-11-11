// https://github.com/jameskirsch -- https://www.linkedin.com/in/james-kirsch-055025ab

// Coding Challenge from the K&R Classic - C Programming
// K&R Exercise 1-9

// "Write a program to copy its input to its output replacing each string of one or more"
//  blanks by a single blank."

#include <stdio.h>

main()
{
    int character;
    int numSpaces = 0;

    while((character = getchar()) != EOF)
    {
        if(character != ' ')
        {
            numSpaces = 0;
        }

        if(character == ' ')
        {
            ++numSpaces;
        }

        if(numSpaces > 1)
        {
           //Do nothing
        }
        else
        {
            putchar(character);
        }
    }
}
