#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int size, target, flag = 0, arr[100], res[2], find = 0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == target)
        {
            if(flag == 0)
            {
                int fpos = i;
                res[0] = fpos;
                flag = 1;
                find = 1;
            }
            else
            {
                int lpos = i;
                res[1] = lpos;
                find = 2;   
            }
        }
    }
    if(find == 2)
    {
        for(int i=0;i<2;i++)
        {
            cout<<res[i]<<", ";
        }
    }
    else
    {
        cout<<"Either one or both instances of target were missing from the array"<<endl;
    }   
    return 0;
}