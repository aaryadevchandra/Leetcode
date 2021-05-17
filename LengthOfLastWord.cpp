//easy

#include<iostream>
using namespace std;
class Solution {
public:
    

int lengthOfLastWord(string s)
{
    
    int len_of_str = 0;
    while(s[len_of_str] != NULL)
    {
        len_of_str++;
    }
    
    int found_letter_flag = -1;
    
    
    int arr[43];
    int counter = 0;

    int arr_index = 0;
    for(int i=0;i<len_of_str + 1;i++)
    {
        if(s[i] != ' ' && s[i] != NULL)
        {
            found_letter_flag = 1;
            counter++;
        }
        else if(s[i] == ' ' || s[i] == NULL)
        {
            if(counter != 0 )
            {
                arr[arr_index] = counter;
                arr_index++;
                counter = 0;   
            }
        }
    }

    
    if(found_letter_flag == -1)
    {
        return 0;
    }
    
    
    return arr[arr_index - 1];
}
};