// Medium
#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int array[size];
    cout<<"Enter array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int last_element = array[size-1], flag = 0;
    for(int i=0;i<size;i++)
    {
        i = i + array[i];
        if(array[i] == last_element)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}