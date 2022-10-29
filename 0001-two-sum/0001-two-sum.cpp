class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<pair<int,int>> temp;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            temp.push_back({nums[i],i});
        }
        
        sort(temp.begin(),temp.end());
        
        int l = 0;
        int r = nums.size()-1;
        while(l < r)
        {
            if(temp[l].first + temp[r].first == target)
            {
                ans.push_back(temp[l].second);
                ans.push_back(temp[r].second);
                break;
            }
            else if(temp[l].first + temp[r].first < target)
            {
                l++;
            }
            else if(temp[l].first + temp[r].first > target)
            {
                r--;
            }
        }
        return ans;
        
    }
};