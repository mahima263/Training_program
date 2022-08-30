// WAP TO ENTER 4 DIGIT NUMBER AND PERFORM SUM OF FIRST AND LAST DIGIT
#include<stdio.h>
int main()
{
    int x=1234;
    int r=x%10;
    printf("%d\n",r);
    int q=x/1000;
    printf("%d\n",q);
    int s=r+q;
    printf("%d",s);
}