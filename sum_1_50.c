//A program to find the sum of numbers between 0 and 50.

#include<stdio.h>

int main()
{
    int sum=0,number=0,count=0;
    for(number=0;number<50;number++)
    {
        count++;
        sum=sum+count;
      //  printf("%d\n",sum);
    }
     printf("%d\n",sum);
     return 0;
}
