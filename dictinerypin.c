#include<stdio.h>

int main()
{
    int pin,i=0,j;

    printf("Enter your Number pin\n");
    scanf("%d",&pin);
    while (i != pin)
    {
        i++;
    }
    printf("Your Broken into pin is %d\n",i);
}
