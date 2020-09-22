#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  system("cls");
  int n, x = 0;
  cout<<"Enter size of array: ";
  cin>>n;
  cout<<endl;
  int arr[n], target;
  cout<<"Enter array: "<<endl;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<endl;
  cout<<"Enter target value: ";
  cin>>target;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]+arr[j] == target)
      {cout<<"Match!"<<endl;x = 1;}
    }
  }
  if(x == 0)
  cout<<"No Match Found!"<<endl;
}