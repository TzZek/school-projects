// Assignment A4a
// Complete each section of code (a)-(f)
// Note: a-f are not in order top to bottom

#include <stdio.h>
#include <stdlib.h>

// print out such as 3 + 5 = 8
// x,y represent the values
void equation( int x, int y )
{
int z = x + y;
printf("%d\n", z);
}


// return the largest value of a,b,c
//  for   3,8,5 the answer is 8
//  for   7,7,2 the answer is 7
int bigger( int a, int b, int c )
{
        if (a > b && a > c) {
        return a;
} else if (b > a && b > c) {
        return b;
} else
        return c;
}


// print out n dashes on the same line
//   followed by \n to advance to the next line
// Name: dashes
// return: nothing
// parameter:  n, integer, how many dashes

//(a)

void dashes (int dash) {
    int i = 0;
    for (i = 0; i < dash; i++)

             {

             printf("-");

             }
             printf("\n");

}

// how many eggs do the cartons hold
//   assume 1 dozen to a carton
int eggs( int cartons )
{
    int total = cartons * 12;
    printf("Eggs: %d\n", total);
    return total;
}

// how many cartons would be needed to store
//  the eggs? All eggs must be in a container,
//  but not all cartons may be filled
int cartons( int eggs )
{
    int c;
        if (eggs % 12 == 0) {
            c = eggs / 12;
        } else {
            c = eggs / 12 + 1;
        }
        return c;
}


int main()
{
        int m,n,e;

        dashes(4);
        dashes(7);

        equation(4,5);
        m = bigger(3,5,6);
        printf("3,5,6: %d\n", m);
        m = bigger(11,2,11);
        printf("11,2,11: %d\n", m);
        e = eggs(3);
        printf("3 cartons holds %d eggs\n", e);
        m = cartons(24);
        printf("24 eggs --> %d cartons\n", m);
        m = cartons(25);
        printf("25 eggs --> %d cartons\n", m);
        return 0;
}