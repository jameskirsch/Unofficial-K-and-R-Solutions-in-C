// https://github.com/jameskirsch
// Coding Challenge from the K&R Classic - C Programming

#include <stdio.h>
#define MAX_WORD_LENGTH 10

// K&R Exercise 1-12

// "Write a Program to print a histogram of the lengths of words in it's input. It is easy to draw
//  the Histogram with the bars horizontal; a vertical orientation is more challenging."
// "A histogram is a graphical representation of the distribution of numerical data."

main()
{
    int word[MAX_WORD_LENGTH];
    int i, countOfCharacters = 0, character;

    for(i = 0; i <= MAX_WORD_LENGTH; ++i)
    {
        word[i] = 0;
    }

    printf("Histogram of character length in words\n");
    printf("--------------------------------------\n");

    while((character = getchar()) != EOF)
    {
        if(character == '\n' || character == ' ' || character == '\t')
        {
            printf("| ");

            for(i = 0; i < countOfCharacters; ++i)
            {
                printf("%c", '*');
            }

            printf("\n");
            countOfCharacters = 0;
        }

        if(character != ' ' && character != '\t' && character != '\n')
        {
            //Will come back to tidy up this case after
            if(countOfCharacters > MAX_WORD_LENGTH)
            {
                character = '\n';
                printf("Word Exceeded Length");
                countOfCharacters = 0;
            }

            if(countOfCharacters <= MAX_WORD_LENGTH)
            {
                word[countOfCharacters] = character;
                ++countOfCharacters;
            }
        }
        else
        {
            word[countOfCharacters] += '\0';
            countOfCharacters = 0;
        }
    }
}
