class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            int tmp = target - nums[i];
            
            if(mpp.find(tmp)!=mpp.end()){
                ans=  vector<int>({i, mpp[tmp]});
                break;
            }
            mpp[nums[i]]= i;
        }
        return ans;
    }
};