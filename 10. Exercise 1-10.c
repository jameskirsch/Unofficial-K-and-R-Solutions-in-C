// Coding Challenge from the K&R Classic - C Programming
// K&R Exercise 1-10

// https://github.com/jameskirsch
// Linkedin: https://www.linkedin.com/in/james-kirsch-055025ab
// Real Time Problem Solving of this - https://youtu.be/l3bXLhAEtxI

// "Write a program to copy its input to its output, replacing each tab
//  by \t, each backspace by \b, and each backslash by \\. This makes
//  tabs and backspaces visible in an unambiguous way."

#include <stdio.h>

main()
{
    int character;

    while((character = getchar()) != EOF)
    {
        if(character == '\t')
        {
            putchar('\\');
        }

        if(character == '\b')
        {
            printf("Notify Me");
        }

        if(character == '\t')
        {
            character = 't';
        }

        if(character == '\b')
        {
            character = 'b';
        }

        if(character == '\\')
        {
            character = '\\';
        }

        putchar(character);
    }
}
