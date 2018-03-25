/*a switch statement that assigns to the variable marks the expected grade*/
#include<stdio.h>

int main()
{
    float M=0;
    int c=1;
    while((M<=100)&&(M>=0)){
    do{
    printf("Enter Student marks\n");
    scanf("%f",&M);
    if(M>=70)
    {
        printf("A");
    }
    else if(M>=60)
    {
        printf("B");
    }
    else if(M>=50)
    {
        printf("C");
    }
    else if(M>=40)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    printf("\nDo You Want to Continue?\n1.YES\n2.NO\n");
    scanf("%d",&c);
    }while (c==1);
    }
    return 0;
}
