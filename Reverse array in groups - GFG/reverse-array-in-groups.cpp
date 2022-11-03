//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    
    void rev(int a, int b, vector<long long> &arr)
    {
        while(a < b)
        {
            swap(arr[a],arr[b]);
            a++;
            b--;
        }
    }
    
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        
        k = min(k,n);
        
        int l = 0;
        int h = k-1;
        
        while(l < n)
        {
            rev(l,h,arr);
            l += k;
            h += k;
            if(h > n-1)
            {
                h = n-1;
            }
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