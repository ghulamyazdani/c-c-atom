#include <iostream>
using namespace std;
int merge(int a[], int l, int mid, int h)
{
    int i = l;
    int j = mid + 1, k = l, c[100];

    while (i < mid && j < h)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
    }
    while (i < mid)
    {
        c[k++] = a[i++];
    }
    while (j < h)
    {
        c[k++] = a[j++];
    }

    for (k = 0; k < h; k++)
    {
        a[k] = c[k];
    }
}

int mergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = l + (h-1) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
int printArray(int a[], int h)
{
    for (size_t i = 0; i < h ; i++)
    {
        cout<<a[i];
    }
    
}
int main()
{
    int a[] = {2, 6, 1, 9, 4, 3, 7};
    int l = 0, h = sizeof(a) / sizeof(a[0]);
    
    mergeSort(a, l, h);
    printArray(a, h);
}
