#include<stdio.h>
int main
{
    char ch;
    printf("enter a character:  ");
    scanf("%c",&ch);
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') )
    printf("alphabet character");
    else
    printf("not a alphabet character ");

    return 0;
}