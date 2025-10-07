#include <stdio.h>
int main() 
{
int a[100], n, i, max, second;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
max = second = a[0];
for(i = 1; i < n; i++) {
if(a[i] > max) {
second = max;
max = a[i];
} else if(a[i] > second && a[i] != max) {
second = a[i];
}
}
if(max == second)
printf("No distinct second largest element.\n");
else
printf("Second largest = %d\n", second);
return 0;
}