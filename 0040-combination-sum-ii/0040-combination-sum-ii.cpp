class Solution
{
    public:
    
    
        void solve(int idx, int target, vector<int> &candidates, vector<int> &output, vector<vector<int>> &ans)
        {
            if(target == 0)
            {
                ans.push_back(output);
                return;
            }
            
            for(int i = idx; i < candidates.size(); i++)
            {
                if(i > idx and candidates[i] == candidates[i-1])
                    continue;
                if(candidates[i] > target)
                    break;
                output.push_back(candidates[i]);
                solve(i+1,target-candidates[i],candidates,output,ans);
                output.pop_back();
                
            }
            
        }
        
    
    
        vector<vector < int>> combinationSum2(vector<int> &candidates, int target) 
        {
            sort(candidates.begin(),candidates.end());
            vector<int> output;
            vector<vector<int>> ans;
            solve(0,target,candidates,output,ans);
            return ans;
        }
};