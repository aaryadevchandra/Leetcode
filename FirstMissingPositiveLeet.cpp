#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
        
       long long temp;
    // for(int i=0;i<nums.capacity();i++)
    // {
    //     for(int j=i+1;j<nums.capacity();j++)
    //     {
    //         if(nums[i] > nums[j])
    //         {
    //             temp = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = temp;
    //         }
    //     }
    // }

    cout<<nums.at(0)<<", "<<nums.at(1)<<", "<<nums.at(2)<<endl;
    cout<<endl;

    int num = 1, flag = 0, break_flag = 0;


    while(true)
    {
        for(int i=0;i<nums.capacity();i++)
        {

            for(int j=i+1;j<nums.capacity();j++)
            {
                if(nums[i] > nums[j])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }

            if(nums[i] == num)
            {
                flag = 1;
                continue;
            }

            if(flag == 0 && i == nums.capacity() - 1)
            {
                break_flag = 1;
                break;
            }
        }

        if(break_flag == 1)
        {
            break;
        }

        flag = 0;
        num++;
    }

    return num;
        
    }

int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);

    cout<<firstMissingPositive(nums);
}