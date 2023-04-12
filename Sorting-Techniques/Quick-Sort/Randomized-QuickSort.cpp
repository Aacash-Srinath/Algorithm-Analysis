#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

int partitionrand(int arr[], int l, int r){
    int ran =l + rand()%(r-l);
    swap(arr[ran],arr[r]);
    int pivot = arr[r];
    int i=l-1;
    for (int j=l;j<r;j++){

        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return (i+1);
}

void qsort(int arr[], int l, int r){
    if (l<r){
    int part = partitionrand(arr,l,r);
    qsort(arr,l,part-1);
    qsort(arr,part+1,r);
}}

int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
