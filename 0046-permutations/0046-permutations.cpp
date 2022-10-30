class Solution
{
    public:

        /*
        	//Approach - 1:- T.C ---> O(N! *N);
                          S.C ---> O(N)

        void solve(vector<int> &v, vector<int> &op, vector<vector < int>> &ans, int freq[])
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
         */

       	// Approach - 2:- T.C ---> O(N! *N);
       	//                S.C ---> O(1);

        void solve(int idx, vector<int> &v, vector<vector< int>> &ans) 
        {
            if(idx == v.size())
            {
                ans.push_back(v);
                return;
            }
            
            for(int i = idx; i < v.size(); i++)
            {
                swap(v[idx],v[i]);
                solve(idx+1,v,ans);
                swap(v[idx],v[i]);
            }
        }

    vector<vector < int>> permute(vector<int> &v)
    {
        vector<vector < int>> ans;
        vector<int> op;
        int n = v.size();
        int freq[7] = { 0 };

       	// solve(v,op,ans,freq);	// Approach -1;

        solve(0, v, ans);	//Approach -2;

        return ans;
    }
};