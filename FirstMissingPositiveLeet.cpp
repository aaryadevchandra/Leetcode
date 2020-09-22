//hard question
#include<iostream>
#include<process.h>
using namespace std;
int main()
{
    int arr[] = {7, 8, 9, 11, 12};
    int cf = 0, size = 5;
    for(int num=1;num<size;num++)
    {
        for(int j=0;j<size;j++)
        {
            if(num != arr[j])
            {
                cf++;
                if(cf == size)
                {
                    cout<<num;
                    exit(0);
                }
            }
            else
            {
                cf = 0;
                break;
            }
        }
    }
    return 0;
}