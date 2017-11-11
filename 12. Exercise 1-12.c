// https://github.com/jameskirsch
// In Real Time - Coding Challenge from the K&R Classic - C Programming
// K&R Exercise 1-12

// "Write a program that prints its input one word per line."

#include <stdio.h>

main()
{
    int character;

    while((character = getchar()) != EOF)
    {
        if(character != ' ' && character != '\t' && character != '\n')
        {
            putchar(character);
        }
        else
        {
            putchar('\n');
        }
    }
}

