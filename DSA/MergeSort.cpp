#include <iostream>
using namespace std;
void merge(int a[], int l, int mid, int h)
{
    int i = l;
    int j = mid + 1, k = l, c[100];

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = a[i++];
    }
    while (j <= h)
    {
        c[k++] = a[j++];
    }
    for (size_t i = l; i <= h ; i++)
    {
        a[i]= c[i];
    }
    
}

void mergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
void printArray(int a[], int h)
{
    for (size_t i = 0; i < h; i++)
    {
        cout << a[i];
    }
    
}
int main()
{
    int a[] = {2, 6, 1, 9, 4, 3, 7};
    int l = 0, h = sizeof(a) / sizeof(a[0]);
   
    mergeSort(a, l, h-1);
    printArray(a, h);
    return 0;
}
