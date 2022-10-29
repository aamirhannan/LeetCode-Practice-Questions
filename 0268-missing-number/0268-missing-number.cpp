class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size()+1;
        int sum = (n*(n-1))/2;
        
        int missing = abs(sum -(accumulate(nums.begin(),nums.end(),0LL)));
        
        return missing;
    }
};