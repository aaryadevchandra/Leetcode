#include<iostream>
#include<stdlib.h>
using namespace std; 
int main()
{
    system("cls");
    int n, temp[10], target, k = 1, x = 0, outcome = 1;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n], shift = rand()%n;
    cout<<endl;
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    while(k <= shift)
    {
        temp[k] = arr[n-k];
        k++;       
    }
    for(int i = n-1; i >= 0 ; i--)
    {
        arr[i] = arr[i-shift];
    }
    k = shift;
    while(k != 0)
    {
        arr[x] = temp[k];
        k--;
        x++;
    }
    cout<<endl;
    cout<<"Array rotated.";
    cout<<endl;
    cout<<endl;
    cout<<"Enter target: ";
    cin>>target;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == target)
        {
            cout<<"Element found at "<<i<<"th postion.";
            outcome = 0;
        }
    }
    if(outcome == 1)
    cout<<-1;
}