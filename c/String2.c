#include <stdio.h>
#include <string.h>

int main() {

    char word[50];
    int len, i;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    printf("@ ");
    for (i = 0; i < len; i+=2){
        printf("%c ", word[i]);
    }
    printf(" @\n");

    printf("@ ");
    for (i = 1; i < len; i+=2){
        printf("%c ", word[i]);
    }
    printf(" @\n");

    return 0;
}