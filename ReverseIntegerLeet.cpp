#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter number of digits of integer: ";
    cin>>n;
    int integer[n];
    cout<<"Enter integer: ";
    for(int i=0;i<n;i++)
    cin>>integer[i];
    if(integer[0]!=0)
    {
        if(integer[0]<0)
        {
            cout<<"Reversed integer is: ";
            integer[0] = (-1) * (integer[0]);
            cout<<"-";   
            for(int i = n - 1; i >= 0 ;i--)
            cout<<integer[i];
        }
        else
        {
            cout<<"Reversed integer is: ";
            for(int i = n - 1; i >= 0 ;i--)
            cout<<integer[i];
        }
    }
    else
    {
        cout<<"Reversed integer is: ";
        for(int i = n - 1; i >= 1 ;i--)
        cout<<integer[i];
    }
}