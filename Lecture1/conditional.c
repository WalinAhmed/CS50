#include <stdio.h>

int a = 3;
int b = 3;

int main(void)
{
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else if (a < b)
    {
        printf("a is less than b\n");
    }
    else
    {
        printf("a is equal b\n");
    }
}