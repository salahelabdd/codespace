#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if (x < y)
    {
        printf("X is less than y");
    }
}