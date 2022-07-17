#include <stdio.h>

void printthearray(int n, int *a){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertsort(int n, int *a, int k){
    for(int i=1; i<n; i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        if(k==i)
            printthearray(n, a);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the array elements::\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int k;
    printf("\nEnter k: ");
    scanf("%d", &k);
    insertsort(n, a, k);

    //printing the sorted array
    printf("\nSorted Array::\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
