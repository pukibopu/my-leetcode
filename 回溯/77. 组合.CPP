#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> combine(int n, int k)
    {
        search(n, k, 1);
        return results;
    }

private:
    std::vector<std::vector<int>> results;
    std::vector<int> tempV;
    void search(int n, int k, int index)
    {
        if (tempV.size() == k)
        {
            results.push_back(tempV);
            return;
        }

        for (int i = index; i <= n; ++i)
        {
            tempV.push_back(i);
            search(n, k, i + 1);
            tempV.pop_back();
        }
    }
};


//剪枝
class Solution2
{
public:
    std::vector<std::vector<int>> combine(int n, int k)
    {
        search(n, k, 1);
        return results;
    }

private:
    std::vector<std::vector<int>> results;
    std::vector<int> tempV;
    void search(int n, int k, int index)
    {
        if (tempV.size() == k)
        {
            results.push_back(tempV);
            return;
        }
        //去掉没必要的数量不够的选择结果
        for (int i = index; i <= n-(k-tempV.size())+1; ++i)
        {
            tempV.push_back(i);
            search(n, k, i + 1);
            tempV.pop_back();
        }
    }
};