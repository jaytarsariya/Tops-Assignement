//how many even numbers are there.
#include <stdio.h>
int main()
{
    int i, rem, num;

    printf("enter limit");
    scanf("%d", &num);

    printf("even numbers of 1 to %d are: \n", num);

    for (i = 1; i <= num; i++)
    {
        rem = i % 2;
        if (rem == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}