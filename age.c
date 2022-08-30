//WAP TO ENTER THE AGE AND PROGRAM WILL CHECK USER IS ADULT OR MINOR
#include<stdio.h>
int main()
{
    int age;
    printf("enter the  age");
    scanf("%d",&age);
    int x = (age>18)?printf(" adult") :printf("minor");
    printf("%d",x);
}