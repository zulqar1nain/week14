#include <iostream>
using namespace std;
bool isSparse(int arr[3][3], int row);
main()
{
    int row =3;
    int arry[3][3] = {
        {0, 1, 0}, {0, 0, 4}, {6, 0, 0}};
        
    cout<<isSparse(arry,row);
}

bool isSparse(int arr[3][3], int row)
{
    int v=(3*3)/2;
    int count=0;
    int r=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
            else
            {
                r++;
            }
        }
    }
    // if(count>r)
    // {
    //     return true;
    // }
   
    if(count>v)
    {
        return true;
    }
     else{
        return false;
    }
}
