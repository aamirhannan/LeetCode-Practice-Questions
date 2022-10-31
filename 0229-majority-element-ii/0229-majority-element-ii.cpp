class Solution {
public:
    vector<int> majorityElement(vector<int>& v) 
    {
        unordered_map<int,int> mp;
        for(int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }
        vector<int> ans;
        for(int i = 0; i < v.size(); i++)
        {
            if(mp[v[i]] > (v.size()/3))
            {
                mp[v[i]] = 0;
                ans.push_back(v[i]);
            }
        }
        
        return ans;
    }
};