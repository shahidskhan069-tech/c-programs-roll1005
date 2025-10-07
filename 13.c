#include <stdio.h>
int main() 
{
    int a, b, f = 0;
    printf("Enter a Number: ");
    scanf("%d", &a);
    for(a = 2; b*b <= a; b++)
    if(a % b == 0){ f = 1; break; }
    if(a > 1 && !f) printf("Prime");
    else printf("Not Prime");
}