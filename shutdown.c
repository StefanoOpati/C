#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
main()
{
    char ch='r';
    printf("Congratulations!!! \n Seriously Good BYE!");
    pause ();
    ch='y';
    if(ch=='y')
    {
        system("C:\\Windows\\System32\\shutdown /s");
    }
    return 0;
}


