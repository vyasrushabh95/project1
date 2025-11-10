#include<stdio.h>
int main()
{
    int num,i, t1=0,t2=1,t3;
    printf("enter a number:  ");
    scanf("%d",&num);

    printf("fibonicci sequence\n");

    for(i=1;i<=num;i++)
{
printf("%d , ", t1);
t3=t1+t2;
t1=t2;
t2=t3;

}


    t3=t1+t2;
    return 0;
}