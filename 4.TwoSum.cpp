#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            int start = nums[i];
            int difference = target - start;
            if(mpp.find(difference) != mpp.end()){
                return {mpp[difference] , i};
            }
            mpp[start]=i;
        }  
        
        return {-1,-1};
        
    }
};

int main(){

    vector<int> nums={2,7,11,15};
    int target = 9;
    Solution s;
    s.twoSum(nums, target);
    return 0;
}