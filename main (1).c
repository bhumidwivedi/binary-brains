#include<stdio.h>
#include<conio.h>
void main()
{
    int n,reverse,remainder;
    printf("enter an integer");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n % 10;
        reverse=reverse*10+remainder;
        n/=10;
    }
        printf("reverse number=%d",reverse);
    getch();
}
