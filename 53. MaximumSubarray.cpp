#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maximum = LONG_MIN; 
        long long sum = 0;
        

    for (int i = 0; i < nums.size(); i++) {

        sum += nums[i];

        if (sum > maximum) {
            maximum = sum;
        }

        
        if (sum < 0) {
            sum = 0;
        }
    }
        return maximum;
    }
};

int main (){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    int result = s.maxSubArray(nums);
    cout<<result;
    return 0;
}