//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        
        /* 
        // Approach 1 ---> T.C O(N), S.C ---> O(1)
            int low = 0, mid = 0, high = n-1;
            while(mid <= high)
            {
                if(a[mid] == 0)
                {
                    swap(a[low],a[mid]);
                    low++;
                    mid++;
                }
                else if(a[mid] == 1)
                {
                    mid++;
                }
                else if(a[mid] == 2)
                {
                    swap(a[mid],a[high]);
                    high--;
                }
            }*/
            
            
            // Approach 2; T.C ---> O(n), T.C --->  O(1)
            
            int count0 = 0;
            int count1 = 0;
            int count2 = 0;
            
            for(int i = 0; i < n; i++)
            {
                if(arr[i] == 0)
                {
                    count0++;
                }
                else if(arr[i] == 1)
                {
                    count1++;
                }
                else if(arr[i] == 2)
                {
                    count2++;
                }
            }
            
            int idx = 0;
            
            for(int i = 0; i < count0; i++)
            {
                arr[idx] = 0;
                idx++;
            }
            
            for(int i = 0; i < count1; i++)
            {
                arr[idx] = 1;
                idx++;
            }
            
            for(int i = 0; i < count2; i++)
            {
                arr[idx] = 2;
                idx++;
            }
            
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends