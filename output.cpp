#include<iostream>
using namespace std;
int main()
{
    int arr[3][2];
    arr[0][0]=5;
    arr[0][1]=4;
    arr[1][0]=6;
    arr[1][1]=8;
    arr[2][0]=2;
    arr[2][1]=100 ;
    cout<<"The output of arrays is: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}