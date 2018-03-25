// A program to output cofeee grade

#include<stdio.h>
#include<string.h>

int main()
{
    char grade;
    printf("Enter cofee grade\n");
    scanf("%s",&grade);
    switch(grade)
    {
    case 'A':
    case 'a':
        printf("Export Quality\n");
    break;
    case 'B':
    case 'b':
        printf("Local Market\n");
    break;
    case 'C':
    case 'c':
        printf("Good for blending\n");
    break;
    default:
        printf("Rejected");
    }
    return 0;
    }
