#include<stdio.h>
int main()
{   char c;
    printf("enter the character");
    scanf("%c",&c);
    ((c=='a'||'A')|| (c=='e'||'E')|| (c=='i'||'I')||( c=='o'||'O')||(c=='u'||'U'))?printf("vowel"):printf("consonant");
}