#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char word[50];
    int rand, len;
    // srand( time(NULL) );
    
    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen( word );

    printf("String Length: %d\n", len);
    
    return 0;
}