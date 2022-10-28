class Solution
{
    public:

        void solve(int idx, vector<int> &v, vector<int> &output, vector< vector< int>> &ans)
        {
            ans.push_back(output);

            for (int i = idx; i < v.size(); i++)
            {
                if (i != idx and v[i] == v[i - 1])
                    continue;

                output.push_back(v[i]);
                solve(i + 1, v, output, ans);
                output.pop_back();
            }
        }

    vector<vector < int>> subsetsWithDup(vector<int> &nums)
    {
        
        sort(nums.begin(),nums.end());
        vector<int> output;
        vector<vector < int>> ans;

        solve(0, nums, output, ans);
        return ans;
    }
};