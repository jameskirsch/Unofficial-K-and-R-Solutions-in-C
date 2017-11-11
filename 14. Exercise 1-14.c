// https://github.com/jameskirsch -- https://www.linkedin.com/in/james-kirsch-055025ab

// Coding Challenge from the K&R Classic - C Programming
// K&R Exercise 1-14

// "Write a program to print a histogram of the frequencies of different characters
//  in its input."

#include <stdio.h>

#define MAX_WORD_LENGTH 10
#define END_OF_WORD 0
#define BEGINNING_OF_WORD 1

main()
{
    int word[MAX_WORD_LENGTH], i, j,
        characterCount = 0,
        character,
        state;

    for(i = 0; i < MAX_WORD_LENGTH; ++i)
    {
        word[i] = 0;
    }

    while((character = getchar()) != EOF)
    {
        if(character != ' ' && character != '\t' && character != '\n')
        {
            state = BEGINNING_OF_WORD;
            if(characterCount == 0)
            {
                for(i = 0; i < MAX_WORD_LENGTH; ++i)
                {
                    word[i] = 0;
                }
            }

            word[characterCount] += character;
            ++characterCount;
        }

        if(character == '\n' || character == '\t' || character == ' ')
        {
            word[characterCount] += '\0';
            state = END_OF_WORD;
            putchar('\n');
        }

        if(characterCount > 0 && state == END_OF_WORD)
        {
            int tempCharacter = ' ';

            for(i = 0; i < characterCount; ++i)
            {
                printf("\n%s\%c ","Character: ", word[i]);
                tempCharacter = word[i];

                for(j = 0; j < characterCount; ++j)
                {
                    if(tempCharacter == word[j])
                    {
                        printf("*");
                    }
                }
            }

            characterCount = 0;
        }
    }
}


