#include <stdio.h>
int main() 
{
    int a[6], n, x, i, f = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
    if(a[i] == x) { f = 1; break; }
    if(f) printf("Found at position %d", i + 1);
    else printf("Not found");
    return 0;
}