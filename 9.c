#include <stdio.h>
int main() 
{
    int a[7], n, pos, val, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    for(i = n; i >= pos; i--)
    a[i] = a[i - 1];
    a[pos - 1] = val;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}