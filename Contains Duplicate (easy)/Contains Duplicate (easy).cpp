#include <iostream>
#include <vector>
#include <unordered_set> // Include the necessary header for unordered_set

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num) > 0)
            {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main()
{
    Solution sol1;
    vector<int> nums1 = {1, 2, 2, 4};

    cout << sol1.containsDuplicate(nums1) << endl;

    return 0;
}