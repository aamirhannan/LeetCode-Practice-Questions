//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution
{
    public:
    int repeatedSubtraction(long long A,long long B)
    {
        //code here
        
        int cnt = 0;
        
        while(A > 0 or B > 0)
        {
            if(A < B)
            {
                B = B-A;
                cnt++;
            }
            else if( A > B)
            {
                A = A-B;
                cnt++;
            }
            else if( A == B )
            {
                A = A - B;
                cnt++;
                break;
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        cin>>A>>B;
        Solution ob;
        cout<<ob.repeatedSubtraction(A,B)<<"\n";
    }
}
// } Driver Code Ends