
#include <stdio.h>

void printthearray(int n, int *a){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectsort(int n, int *arr, int k){
        for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1; j<n;j++){
            if(arr[j]>arr[min])
            {
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        if(i+1==k)
            printthearray(n, arr);
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
    selectsort(n, a, k);

    //printing the sorted array
    printf("\nSorted Array::\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

