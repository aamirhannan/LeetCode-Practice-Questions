class Solution
{
    public:
        vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
        {
            int n = nums1.size();
            int m = nums2.size();
            vector<int> output;
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (nums2[j] == nums1[i])
                    {
                        ans = -1;
                        for (int k = j + 1; k < m; k++)
                        {
                            if (nums2[k] > nums2[j])
                            {
                                ans = nums2[k];
                                output.push_back(ans);
                                break;
                            }
                        }
                    }
                }
                if(ans == -1)
                {
                    output.push_back(ans);
                }
            }
            
            return output;
        }
};