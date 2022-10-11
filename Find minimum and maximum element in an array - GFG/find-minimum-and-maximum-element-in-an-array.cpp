//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) 
{
    
    pair<long long, long long> ans;
    vector<long long> v;
    
    // int min = INT_MAX; max = ITN_MIN;
    for(int i = 0; i < n; i++)
    {
        v.push_back(a[i]);
    }
    
    sort(v.begin(),v.end());
    
    ans.first = v[0];
    ans.second = v[v.size()-1];
    
    return ans;
    
    
    
}