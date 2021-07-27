// Array Assignment 1
// Due:  Sunday 7/25  4pm
// fill in code in areas marked    // QUIZ
// don't change other things; code provided is good
// use of break statment will result in 0
// changes to loop variable outside the for will be a 0
// only a single variable such as  [k] can be in []
// this program is short; you'll write about 20 lines

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int abc[10], xyz[20];
    int k, x;
    // QUIZ 1
    //  Declare an array named GGG that can hold exactly 12 integer values
    int GGG[12];

    // put 5 1's into abc
    for (k = 0; k < 5; k++)
    {
        abc[k] = 1;
    }

    // print out the first 5 values in abc
    for (k = 0; k < 5; k++)
    {
        printf("%2d ", abc[k]);
    }
    printf("\n");

    // QUIZ 2
    // Using the first 7 locations in xyz
    //   - fill with numbers 20,21,22,etc
    xyz[0] = 20;
    xyz[1] = 21;
    xyz[2] = 22;
    xyz[3] = 23;
    xyz[4] = 24;
    xyz[5] = 25;
    xyz[6] = 26;

    // QUIZ 3
    // Print the first 7 numbers from xyz on 1 line
    //   and then a newline
    int count;

    for (count = 0; count < 7; count++)
    {
        printf("%d ", xyz[count]);
    }
    printf("\n");

    // QUIZ 4
    // Print the first 7 numbers from xyz in reverse order
    //    - location 6, 5, 4... etc
    // and then a newline
    for (count = 6; count > -1; count--)
    {
        printf("%d ", xyz[count]);
    }
    printf("\n");

    // Seed the random generator with 49
    srand(49);

    // QUIZ 5
    // Fill GGG with random values in range 1 to 25
    // you will get the same numbers as me
    int i;
    for (i = 0; i <= 12; i++)
    {
        GGG[i] = rand() % 25 + 1;
    }
    printf("Array result: %d\n", GGG[1]);

    // QUIZ 6
    // Find the sum of item in GGG and print it out
    int sum = 0;
    int j;
    for (j = 0; j <= 12; j++)
    {
        sum = sum + GGG[j];
    }
    printf("Sum: %d\n", sum);

    // QUIZ 7
    //  check if GGG contains all odd values
    //  code must work for all cases, not just the srand(49) vals
    //  must use for loop
    //  use of break will be 0; must use for loop
    // print  OddYes or  OddNo  as the result of this section
    int odd;
    int counter;
    for (odd = 0; odd <= 12; odd++)
    {
        if (GGG[odd] % 2 == 0)
        {
            counter++;
        }
    }

    if (counter > 0)
    {
        printf("OddNo\n");
    }
    else
    {
        printf("OddYes\n");
    }
    // couldn't we also use the sum to simplify this
    // As if no odd numbers are present the last number in the sum will be even
    // i.e. if (sum % 2 == 0) then OddNo

    // here is the list so you can double-check
    for (k = 0; k < 12; k++)
    {
        printf("%2d ", GGG[k]);
    }
    printf("\n");

    return 0;
}