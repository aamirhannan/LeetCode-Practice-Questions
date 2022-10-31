class Solution {
public:
    int sumOfUnique(vector<int>& v) 
    {
        unordered_map<int, int> mp;
        for(int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }
        
        int sum = 0;
        
        for(int i = 0; i < v.size(); i++)
        {
            if(mp[v[i]] == 1)
            {
                sum += v[i];
            }
        }
        
        return sum;
        
    }
};