class Solution
{
    public:

        static bool comparator(int a, int b)
        {
            string s1 = to_string(a) + to_string(b);
            string s2 = to_string(b) + to_string(a);

            if (s1 > s2)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

    string largestNumber(vector<int> &v)
    {

        sort(v.begin(), v.end(), comparator);
        string ans;
        for (int i = 0; i < v.size(); i++)
        {
            ans += to_string(v[i]);
        }
        
        int idx = 0;
        while(idx+1 < ans.size() and ans[idx] == '0')
        {
            idx++;
        }

        return ans.substr(idx);
    }
};