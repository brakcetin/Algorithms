#include <math.h>
#include <stdio.h>

void insertionSort(int a[], int n);

int main()
{
    int a[] = {12, 23, 4, 65, 5, 44};
    int n = sizeof(a) / sizeof(a[0]); //a.length

    printf("Before the Insertion Sort\n");
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");

    insertionSort(a, n);

    printf("\nAfter the Insertion Sort\n");
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");

    return 0;
}

void insertionSort(int a[], int n)
{
    int key;
    for(int j = 1; j < n; j++)
    {
        key = a[j];
        //Insert a[j] into the sorted sequence a[1...j-1]
        int i = j - 1;
        while(i >= 0 && a[i] > key)
        {
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1]=key;
    }
}
