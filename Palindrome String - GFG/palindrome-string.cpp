//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int k = 0;
	    int e = S.size()-1;
	    for(int i = 0; k <= e; i++,k++,e--)
	    {
	        if(S[k] != S[e])
	        {
	            return 0;
	        }
	       // else
	       // {
	       //     k++;
	       //     e--;
	       // }
	    }
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends