class Solution
{
    public:

        void solve(string ip, string op, int idx, vector<string> &v) 
        {
            //Base case
            if(idx == ip.size())
            {
                v.push_back(op);
                return;
            }
            //Hypothesis
            if(isalpha(ip[idx]))
            {
                string op1 = op;
                string op2 = op;
                op1.push_back(tolower(ip[idx]));
                op2.push_back(toupper(ip[idx]));
                
                
                solve(ip,op1,idx+1,v);
                solve(ip,op2,idx+1,v);
            }
            else
            {
                string op1 = op;
                op1.push_back(ip[idx]);
                solve(ip,op1,idx+1,v);
            }
            return;
        }

    vector<string> letterCasePermutation(string s)
    {
        string ip = s;
        string ot = "";
        vector<string> v;
        solve(ip, ot, 0, v);

        return v;
    }
};