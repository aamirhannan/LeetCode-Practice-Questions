//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:

    void rev(int a, int b, vector<long long> &arr)
    {
        while(a < b)
        {
            swap(arr[a],arr[b]);
            a++;
            b--;
        }
    }
    
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        
        k = min(k,n);
        
        int l = 0;
        int r = k-1;
        
        for(int i = 0; i < n; i++)
        {
            rev(l,r,arr);
            l += k;
            r += k;
            
            r = min(r,n-1);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends