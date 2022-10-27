//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void subsetSum(int idx, int n, vector<int> &ans,vector<int> &arr,int sum)
    {
        if(idx >= n)
        {
            ans.push_back(sum);
            return;
        }
        
        sum += arr[idx];
        subsetSum(idx+1,n,ans,arr,sum);
        
        sum -= arr[idx];
        subsetSum(idx+1,n,ans,arr,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        // vector<int> v;
        vector<int> ans;
        int n = N;
        int idx = 0;
        int sum = 0;
        
        subsetSum(idx,n,ans,arr,sum);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends