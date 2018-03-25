#include<stdio.h>
#include<stdio.h>
int count=1,answer,n,p;
int power(int *x,int *y)
{
    x=&n;
    y=&p;
    while(count<=y)
    {
        answer=(answer*x);
        count++;
    }
    return answer;
}
int main()
{

    printf("Enter n and p\n");
    scanf("%d%d",&n,&p);
    printf("%d",power(n,p));
    return 0;
}
