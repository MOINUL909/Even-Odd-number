#include<stdio.h>
int evenodd(int a)
{
    if(a%2==0)
        printf("The number is even\n");
    else
        printf("The number is odd \n");
}
int main()
{
    int num;
    scanf("%d",&num);
    evenodd(num);
}
