class Solution
{
    public:

        void solve(int idx, vector<int> &v, vector<int> &op, vector< vector< int>> &ans, int target)
        {
            if (idx == v.size())
            {
                if (target == 0)
                {
                    ans.push_back(op);
                }
                return;
            }

            if (v[idx] <= target)
            {
                op.push_back(v[idx]);
                solve(idx, v, op, ans, target - v[idx]);
                op.pop_back();
            }

            solve(idx + 1, v, op, ans, target);

            return;
        }

    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {
       
        vector<int>op;
        vector<vector < int>> ans;
        int idx = 0;
        solve(idx, candidates, op, ans, target);
        return ans;
    }
};