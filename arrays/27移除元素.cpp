#include <iostream>
#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        int _size = nums.size();
        for (auto i = 0; i < _size ; ++i)
        {
            if(nums[i]==val){
                
                for(auto j=i;j<_size;j++){
                    nums[j]=nums[j+1];
                }
                i--;
                _size--;
            }
        }

        return _size;
    }
};