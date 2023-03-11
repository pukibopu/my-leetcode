#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        search(n,k,1,0);
        return results;
    }

private:
    vector<vector<int>> results;
    vector<int> temp;

    void search(int target,  int k, int nowIndex, int sum)
    {
        if (temp.size() == k)
        {
            if (sum == target)
                results.push_back(temp);
            return;
        }

        for (int i = nowIndex; i <= 9; i++)
        {
            sum+=i;
            temp.push_back(i);
            search(target,k,i+1,sum);
            sum-=i;
            temp.pop_back();
        }
    }
};
