#include<stdio.h>

int main()
{
    int number=1,sum,count=0;
    float average;
    while(number>=0)
    {
        printf("Enter a Positive integer\nnegative to exit\n");
        scanf("%d",&number);
        if (number>=0)
        {
            sum=sum+number;
            count++;
        }
    }
    average=sum/count;
    printf("Number of Values inputed is %d\n",count);
    printf("Average is %.2f\n",average);
}
