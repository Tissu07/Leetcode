#include <iostream>
#include <vector>
#include <map>
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
    // Write C++ code here
    

int main(){

    vector<int> nums={3,2,4};
    int target = 6;
    Solution s;
    vector<int> ans = s.twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
}
