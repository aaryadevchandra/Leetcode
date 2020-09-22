#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int n, t, x = 0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter target value: ";
    cin>>t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;j<n;j++)
            {
                if(arr[i]+arr[j]+arr[k]==t)
                {
                    cout<<"Target formed by summation of "<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
                    x = 1;
                }
            }
        }
    }
    if(x == 0)
    cout<<"None of the permutation of 3 numbers could add to the target value."<<endl;
}