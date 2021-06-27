#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
             
        for(int i=0;i<nums2.size();i++)
        {
             nums1.push_back(nums2[i]);
        }
        
        
        
        sort(nums1.begin(), nums1.end());
        
        
	
	int index = 0;


	if(nums1.size() %2 == 0)
        {
	    index = nums1.size()/2;
            double val = nums1[index - 1] + nums1[index];
	    
	    return val/2 ;
	}
        else 
        {
	     index = nums1.size()/2;
            return nums1[index];
        }
        
        
    }
};





int main()
{

  vector<int> nums1;
  vector<int> nums2;


  nums1.push_back(1);
  nums1.push_back(3);


  nums2.push_back(2);
  nums2.push_back(33);
  
  Solution obj;
  double median = obj.findMedianSortedArrays(nums1, nums2);

  cout<<"\n\n"<<"Median is : "<<median<<endl;

}
