#include <bits/stdc++.h>
using namespace std;
int BubbleSort(int a[], int num)
{
  int temp;
  for (size_t j = 1; j < num; j++)
  {
    for (size_t i = 0; i < num - j; i++)
    {
      if (a[i] > a[i + 1])
      {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
  std::cout << "sorted array" << '\n';
  for (size_t i = 0; i < num; i++)
  {
    std::cout << a[i] << '\n';
  }
}
int main(int argc, char const *argv[])
{
  int n, a[100], s;
  std::cout << "Enter number of elements" << '\n';
  std::cin >> n;
  std::cout << "Enter array" << '\n';
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> a[i];
  }
  BubbleSort(a, n);

  return 0;
}
