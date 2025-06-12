#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
public:
    vector<vector<int>> results;
    void helper(vector<int> &subset, vector<int> &nums, int ind, int n)
    {
        if (ind >= n)
        {
            results.push_back(subset);
            return;
        }
        subset.push_back(nums[ind]);
        helper(subset, nums, ind + 1, n);
        subset.pop_back();
        helper(subset, nums, ind + 1, n);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> subset;
        helper(subset, nums, 0, nums.size());
        return results;
    }
};
