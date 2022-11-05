class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        
        int i = 0, j = 0;
        
        while(i < n and j < m)
        {
            int mn = min(nums1[i], nums2[j]);
            ans.push_back(mn);
            
            if(mn == nums1[i])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        
        while(i < n)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        
        while(j < m)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        
        int sz = m+n;
        
        if(sz % 2 == 1)
        {
            return ans[sz/2];
        }
        else
        {
            return (double) (  ans[sz/2] + ans[(sz/2-1)]  ) /2.0;
        }
        
    }
};