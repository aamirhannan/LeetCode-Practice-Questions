class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //Approach - 1,Voting Algorithm; T.C - O(n), S.C - O(1);
        
        int member = 0;
        int gang = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(member == 0)
            {
                member += 1;
                gang = nums[i];
            }
            else if(nums[i] == gang)
            {
                member += 1;
            }
            else if(nums[i] != gang)
            {
                member -= 1;
            }
        }
        
        return gang;
        
        
        /*Approach - 2; T.C - O(nlog(n)), S.C - O(1);
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        */
    }
};