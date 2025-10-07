#include <stdio.h>
int main()
{
    int a,b,i;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("\n Enter N: ");
    scanf("%d",&b);
    for(i = 1; i <= b; i++)
    printf("%d ", a*i);
}