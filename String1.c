#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char word[50];
    int randNum, len;
    srand( time(NULL) );

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    printf("String Length: %d\n", len);

    int i = 0;

    randNum = rand()%len;
    printf("Char: %c\n", word[randNum]);
  

    return 0;
}