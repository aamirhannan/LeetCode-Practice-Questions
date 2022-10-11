#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int s, int e, int n )
{
    while(s < e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i = 0; i < n; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve()
{
        int n;
    	cin>>n;
    	int arr[n];
    	for(int i = 0; i < n; i ++)
    	{
    	    cin>>arr[i];
    	}
    	reverse(arr,0,n-1,n);
}

int main() 
{
	//code

    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}