#include <iostream>
using namespace std;
int averagearray(int arr[], int size);
int main()
{
    int size = 3;
    int arrsize[size] = {1, 2, 3};
    float average = averagearray(arrsize, size);
    cout <<"Average: "  <<average;
}
int averagearray(int arr[], int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum =sum+arr[i];
    }
    return sum/size;
}
