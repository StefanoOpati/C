//A program to calculate area of different shapes using functions

#include<stdio.h>
#include<math.h>

#define Pie 3.142
int base,height,length,width,radius,side;
float area=0,circumference;

float triangle()
{
    printf("Enter Height of The Triangle\n");
    scanf("%d",&height);
    printf("Enter Triangle base length\n");
    scanf("%d",&base);
    area= 0.5*height*base;
    return area;
}
float circle()
{
    printf("Enter Radius of the Circle\n");
    scanf("%d",&radius);
    circumference=Pie*(radius+radius);
    printf("Circumference of the Circle is %.2f\n",circumference);
    area = Pie*pow(radius,2);
    return area;
}
float square()
{
    printf("Enter Length of the Squre side\n");
    scanf("%d",&side);
    area= side*side;
    return area;
}
float rectangle()
{
    printf("Enter Length of the Triangle\n");
    scanf("%d",&length);
    printf("Input the Width of The Rectangle\n");
    scanf("%d",&width);
    area=width*length;
    return area;
}
float sphere()
{
    printf("Enter Radius of The Sphere\n");
    scanf("%d",&radius);
    area=4/3*Pie*pow(radius,3);
    return area;
}
int main()
{
    int choice=0;
    float areaa;
    while (choice!=6){
    printf(".....MENU.....\nChose A shape to get the area\n");
    printf("Option\tShape\t\n");
    printf("1.\tTriangle\t\n2.\tCircle\t\n3.\tSquare\t\n4.\tRectangle\t\n5.\tSphere\t\n6.\tEXIT\t\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        areaa=triangle();
    break;
    case 2:
        areaa=circle();
    break;
    case 3:
        areaa=square();
    break;
    case 4:
        areaa=rectangle();
    break;
    case 5:
        areaa=sphere();
    break;
    case 6:
        printf("!!!Good Bye!!!\nHave A nice DAY\n");
    break;
    default:
        printf("INVALID CHOICE.\n Try Again.\n");
    }
    printf("The Area of Your Shape is %.2f\n",areaa);
    }
    return 0;
}
