//WAP TO SWAP TWO NUMBERS
#include<stdio.h>
int main()
{
    int a,b;
    printf("swap number");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}