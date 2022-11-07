//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:

    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int sum = arr[0];
        vector<int> ans;
        int l = 0;
        for(int r = 1; r < n; r++)
        {
            sum += arr[r];
            while(l < r and sum > s)
            {
                sum -= arr[l];
                l++;
            }
            if(sum == s)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
        }
        if(ans.size() == 0)
        {
            ans.push_back(-1);
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends