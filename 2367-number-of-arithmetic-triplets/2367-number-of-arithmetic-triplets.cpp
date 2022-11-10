class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        vector<int> temp(40000,0);

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            temp[nums[i]] = 1;
        }
        
        int triplets = 0;

        for(int i = 0; i < n; i++)
        {
            int x = nums[i];
            if(temp[x+diff] == 1 and temp[x + (2*diff)] == 1)
            {
                triplets++;
            }
        }


        return triplets;

        
    }
};