class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // onlu work when sorted
        // int i=0,j=nums.size()-1;
        // while(i<j){
        //     if(nums[i]+nums[j]==target)return {i,j};
        //     else if(nums[i]+nums[j]>target)j--;
        //     else i++;
        // }
        // return {};
        // not sorted
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int search = target-nums[i];
            if(mp.find(search)!=mp.end()){
                return {mp[search],i};
            }
            mp[nums[i]]=i;
        }
        return{};
    }
};