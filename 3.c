#include <stdio.h>
int main()
{
    int a[5], n, i, min;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("ENTER Values: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    min = a[0];
    for(i=1;i<n;i++) if(a[i]<min) min=a[i];
    printf("Smallest = %d", min);
    return 0;
}