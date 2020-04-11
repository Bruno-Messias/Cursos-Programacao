//add .h

//#include <cs50.h>
//#include <stdio.h>
//#include <math.h>

int main(void)
{
    float dollars;
    //prompt dollars
    do
    {
        dollars = get_float("Change owed: "); 
    }
    while (dollars < 0);
    //defining cents
    int cents = round(dollars * 100);
    int coins = 0;
    //body of Greedy Algorithm
    while (cents > 0)
    {
        if (cents - 25 >= 0)
        {
            cents = cents - 25;
            coins++;
        }
        else if (cents - 10 >= 0)
        {
            cents = cents - 10;
            coins++;
        }
        else if (cents - 5 >= 0)
        {
            cents = cents - 5;
            coins++;
        }
        else
        {
            cents = cents - 1;
            coins++;
        }
    }
    //print coins
    printf("%i\n", coins);

}
