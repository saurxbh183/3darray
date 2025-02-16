#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows: \n";
    cin>>m;
    cout<<"Enter number of colomns: ";
    cin>>n;
    int arr[m][n];
  
    cout<<"Enter your array elements: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             cin>>arr[i][j];
        }
       // cout<<endl;
    }
    cout<<"Your array elements: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}