#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //defining variables
    int n, i, j, x = 0;
    //checking the range of 1 to 8
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //defining the height of the pyramid
    for (; n > 0; n--)
    {
        //printing spaces
        for (i = n - 1; i > 0; i--)
        {
            printf(" ");
            
        }
        x++;
        //print hashes
        for (j = 0; j < x ; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
