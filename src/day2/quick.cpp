#include<stdio.h>
#include<stdlib.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void quick_sort(int a[], int low, int high)
{
    if(low < high)
    {
        int pivot = partition(a, low, high);
        quick_sort(a, low, pivot-1);
        quick_sort(a, pivot+1, high);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}

int main()
{
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a)/sizeof(a[0]);
    quick_sort(a, 0, n-1);
    printf("Sorted array: \n");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
