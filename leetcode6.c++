// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());  //to bring all duplicate elements adjacent to each other
        int ans = nums[0];
        vector<int> v;

        for(int i=1;i<nums.size();i++){
            //a^a=0
            if((ans^nums[i])==0){
                v.push_back(nums[i]);
            }
            ans=nums[i]; 
        }
        return v;
    }
};