#include <stdio.h>

int main()
{
    int a = 2024 ;
    if (a % 4 == 0 && a % 100 != 0)
    {
        printf("Congrats! %d is the leap year", a);
    }
    else
    {
        printf("this is not a leap year");
    }
    return 0;
}