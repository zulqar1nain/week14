
#include <iostream>
using namespace std;
int merge(int arr1[], int size1, int arr2[],int size2);
  int arr3[3];
main()
{
    int size1=4;
    int size2=3;
    int arr1[size1] = {0,1, 2, 3};
    int arr2[size2] = {4, 5, 6};
  
    int mer=merge(arr1,size1,arr2,size2);
}
int merge(int arr1[], int size1, int arr2[],int size2)
{
    for (int idx = 0; idx < size1; idx++)
    {
        arr3[idx]=arr1[idx];
        cout <<arr3[idx] <<" ";
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[i] = arr2[i];
        cout <<arr3[i] <<" ";
    }
}