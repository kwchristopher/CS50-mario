#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompts user for an input, repeats until a value between 0 and 23 is provided inclusive
    int s;
    do
    {
        s = get_int("Pyramid height: ");
    }
    while (s < 0 || s > 23);

    for (int i = 0; i < s; i++)
    {
        //Prints spaces for left side of pyramid
        for (int j = s - 1; j > i; j--)
        {
            printf(" ");
        }
        //Prints hashes for left side of pyramid
        for (int k = s + 1; k > s - i; k--)
        {
            printf("#");
        }
        //Prints spaces between pyramids
        printf("  ");
        //Prints hashes for right side of pyramid
        for (int l = s + 1; l > s - i; l--)
        {
            printf("#");
        }
        //Prints new line for each row of pyramid
        printf("\n");
    }
}
