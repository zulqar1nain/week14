#include <iostream>
using namespace std;
void buttonkt(string arr[], int size);
int main()
{
    int size=3;
    string arr[size]={"like","dislike","like"};
    buttonkt(arr,size);
}
void buttonkt(string arr[], int size)
{
        if (arr[1]==arr[2])
        {
           cout<<"nothing";
        }
        if(arr[1]!=arr[2])
        {
            cout<<arr[2];
        }
}
