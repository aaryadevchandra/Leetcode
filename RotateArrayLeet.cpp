#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  system("cls");
  int n, k;
  cout<<"Enter size of array: ";
  cin>>n;
  cout<<endl;
  int arr[n], temp[n];
  cout<<"Enter array: "<<endl;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<endl;
  cout<<"Your entered array is: "<<endl;
  for(int i=0;i<n;i++)
  cout<<arr[i]<<", ";
  cout<<endl;
  cout<<endl;
  cout<<"Enter the number of times you would like the array to be shifted: ";
  cin>>k;
  int var = k; 
  while(k!=0)
  {
    temp[k] = arr[n-k];
    k--; 
  }
  k = var;
  while(k!=0)
  {
  for(int i=n-2;i>=0;i--)
  {
    arr[i+1] = arr[i];
  }
  k--;
  }
  int x = 0;
  k = var;
  while(k!=0)
  {
   arr[x] = temp[k];
   x++;
   k--;
  }
  for(int i=0;i<n;i++)
  cout<<arr[i]<<", ";
}