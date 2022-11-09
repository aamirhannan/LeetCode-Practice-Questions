class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        //Approach - 1 (T.C --> O(NLogN),   S.C --> O(1))
        /*
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] *= nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
        */


        //Approach - 2 (T.C --> O(N),  S.C --> )

        int l = 0;
        int r = nums.size()-1;
        vector<int> ans;
        while(l <= r)
        {
            int leftsquare = nums[l] * nums[l];
            int rightsquare = nums[r] * nums[r];
            
            int maxi = max(leftsquare,rightsquare);
            ans.push_back(maxi);
            if(maxi == leftsquare)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;

    
    
    }
};