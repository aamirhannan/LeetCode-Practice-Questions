class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {
            multiset<int> st;
            for(auto s: nums)
            {
                st.insert(s);
            }
            nums.clear();
            for(auto x : st)
            {
                nums.push_back(x);
            }
        }
};