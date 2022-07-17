#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elementsn");
scanf("%d",&n);
printf("Enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}





 #include<stdio.h>
#include<stdlib.h>
#define size 10
int binsearch(int[], int, int, int);
int main() {
 int num, i, key, position;
 int low, high, list[size];
 printf("\nEnter the total number of elements");
 scanf("%d", &num);
 printf("\nEnter the elements of list :");
for (i = 0; i < num; i++) {
 scanf("%d", &list[i]);
 }
 low = 0;
 high = num - 1;
 printf("\nEnter element to be searched : ");
 scanf("%d", &key);
 position = binsearch(list, key, low, high);
 if (position != -1) {
 printf("\nNumber present at %d", (position + 1));
 } else
printf("\n The number is not present in the list");
 return (0);
}
// Binary search function for binary search
int binsearch(int a[], int x, int low, int high) {
 int mid;
 if (low > high)
 return -1;
 mid = (low + high) / 2;
 if (x == a[mid]) {
return (mid);
 } else if (x < a[mid]) {
 binsearch(a, x, low, mid - 1);
 } else {
 binsearch(a, x, mid + 1, high);
 }
}
