#include <iostream>
using namespace std;
void Rotate(int arr[], int d, int n)
{
    int temp[n];
    int k = 0;
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  
    }
}
int main()
{
    int n=7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int d;
    cout<<"Enter d: ";
    cin>>d;
    Rotate(arr, d, n);
    return 0;
}