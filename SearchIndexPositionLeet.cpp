/*Take a user input array. Turn it into a ascending sorted array. Take user taget value and check whether the target value exists in the array. If not, add
target in the array in respective ascending order*/
#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
int add(int arr1[], int arr2[], int size, int target);
int main()
{
    system("cls");
    int n, t = 0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr1[n], target, arr2[n+1];
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"Enter target value: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(arr1[i] == target)
        t = 1;
    }
    if(t == 1)
    {
        cout<<"Target value exists."<<endl;
        exit(0);
    }
    else
    add(arr1, arr2, n, target);
    for(int i=0;i<n+1;i++)
    cout<<arr2[i]<<", ";
}
int add(int arr1[], int arr2[], int size, int target)
{
    char ch;
    int temp;
    cout<<"Target value doesn't exist."<<endl;
    cout<<endl;
    cout<<"Would you like to add the target in the array in the respective ascending position? (y/n)";
    cin>>ch;
    if(ch == 'y'){
    for(int i=0;i<size;i++)
    arr2[i] = arr1[i];
    arr2[size] = target;
    for(int i=0;i<size+1;i++)
    {
        for(int j=i+1;j<size+1;j++)
        {
            if(arr2[j]<arr2[i])
            {
                temp = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = temp;
            }
        }
    }
    return arr2[size+1];}
    else
    exit(0);
}