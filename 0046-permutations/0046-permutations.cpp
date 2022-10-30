class Solution {
public:
    
    void solve(vector<int> &v, vector<int> &op, vector<vector<int>> &ans, int freq[])
    {
        if(op.size() == v.size())
        {
            ans.push_back(op);
            return;
        }
        
        for(int i = 0; i < v.size(); i++)
        {
            if(!freq[i])
            {
                op.push_back(v[i]);
                freq[i] = 1;
                solve(v,op,ans,freq);
                freq[i] = 0;
                op.pop_back();
            }
        }
        
        
    }
    vector<vector<int>> permute(vector<int>& v) 
    {
        vector<vector<int>> ans;
        vector<int> op;
        int n = v.size();
        int freq[7] = {0};
        
        solve(v,op,ans,freq);
        
        return ans;
    }
};