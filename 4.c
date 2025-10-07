#include <stdio.h>
int main() {
    char a[7];
    int i;
    printf("Enter a string: ");
    scanf("%s",a);
    for(i = 0; a[i] != '\0'; i++)
    {
    if(a[i] >= 'a' && a[i] <= 'z') 
    {
    a[i] = a[i] - 32; 
    }
    }
    printf("Uppercase: %s", a);
    return 0;
}