#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randNum, i;
    srand( time(NULL) );

    do {
        randNum = rand()%12+1;
        i++;
        printf("%d) %d\n",i, randNum);
    } while (randNum != 11);

    return 0;
}
