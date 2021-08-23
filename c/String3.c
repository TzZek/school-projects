#include <stdio.h>
#include <string.h>

int main()
{
    char word[275];
    int len;
    int spaceCount = 0, gCounter = 0, upCounter = 0, numCounter = 0;

    printf("Enter your line / phrase: ");
    scanf("%[^\n]", word);

    word[strlen(word) - 2] = 0;

    printf("You inputted: %s\n", word);

    len = strlen(word);

    printf("The Length is: %d\n", len);

    // Find # of 'g'
    for (int g = 0; g < len; g++)
    {
        if (word[g] == 'g')
        {
            gCounter++;
        }
    }
    printf("Number of G's: %d\n", gCounter);
    // Find the # of Uppercase Letters
    for (int u = 0; u < len; u++){
        if (word[u] >= 'A' && word[u] <= 'Z'){
            upCounter++;
        }
    }
    printf("Number of Uppercase: %d\n", upCounter);

    // Find the # of Numeric digits
    for (int n = 0; n < len; n++){
        if (word[n] >= '0' && word[n] <= '9'){
            numCounter++;
        }
    }
    printf("Number of Numeric Digits: %d\n", numCounter);

    // Find the number of spaces
    for (int i = 0; i < len; i++)
    {
        if (word[i] == ' ')
        {
            spaceCount++;
        }
    }

    printf("Number of spaces: %d\n", spaceCount);



    return 0;
}