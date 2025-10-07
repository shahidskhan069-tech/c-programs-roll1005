#include <stdio.h>
#include <string.h>
int main()
{
    char a[7],b[8];
    printf("Enter first string: ");
    scanf("%s",a);
    printf("\n Enter second string : ");
    scanf("%s",b);
    if (strlen(a) > strlen(b))
    printf("String a is longer.\n");
    else if (strlen(a) < strlen(b))
    printf("String b is longer.\n");
    else
    printf("Both strings are of equal length.\n");
    return 0;
}