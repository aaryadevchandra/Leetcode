#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
     vector<int> ans;
     if(nums.size() == 0)
     {
	ans.push_back(-1);
	ans.push_back(-1);
     	return ans;
     
     }
         
     
     int target_found_flag = 0;
      
     
     for(int i=0;i<nums.size();i++)
      {

         
     	 if(target == nums[i])
        {
          target_found_flag = 1;
          ans.push_back(i);
        }
      
      }

     if(target_found_flag == 0)
     {
       ans.push_back(-1);
       ans.push_back(-1);
       
     }
        
        
    if(target_found_flag == 1 && ans.size() == 1)
    {
        ans.push_back(ans[0]);
    }
     
    
        
        vector<int> res;
        res.push_back(ans[0]);
        res.push_back(ans[ans.size() - 1]);
        
        
      
 	return res;     
    }
};
