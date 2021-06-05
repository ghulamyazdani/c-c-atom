#include <iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main(int argc, char const *argv[]) {
  char nums1[10],nums2[10];
  for(i=0;i<=9;i++)
  {
    std::cin >> nums1[i];
  }
  for(i=0;i<=9;i++)
  {
    std::cin >> nums2[i];
  }
  for(i=0;i<=9;i++)
  {
     array[i] =nums1[i];

  }
  for(i=0;i<=9;i++)
  {
     array[k] =nums1[i];
     k++;

  }
  for(i=0;i<=9;i++)
  {
    cout << array[i];
  }
selectionSort(array,9)



  return 0;
}
