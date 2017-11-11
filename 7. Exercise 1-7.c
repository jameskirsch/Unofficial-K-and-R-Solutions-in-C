// https://github.com/jameskirsch -- https://www.linkedin.com/in/james-kirsch-055025ab

// Coding Challenge from the K&R Classic - C Programming
// K&R Exercise 1-7

// "Write a program to print the value of EOF."

#include <stdio.h>

main()
{
    int character;
    while((character = getchar()) != EOF)
    {
        printf("%d", EOF);
    }
}
