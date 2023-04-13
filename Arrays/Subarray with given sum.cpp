//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
   vector<int> subarraySum(vector<int>arr, int n, long long s)
    { vector<int> vc;
        // Your code here
        if(s==0 && n!=0){
            vc.push_back(-1);
            return vc;
        }
      int i=0;
      int prev=-1;
      int sum=arr[0];
    while(i<n && prev<=i)
    {
        if(sum<s)
        {
            i++;
            sum+=arr[i];
            
        }
       else if(sum>s)
        {
            prev++;
            sum-=arr[prev];
            
        }
        else if(sum==s)break;
    }
       
        if(sum==s && prev==-1)
        {
            
            vc.push_back(1);
            vc.push_back(i+1);
            return vc;
        }
        else if(sum==s)
        {
            
            vc.push_back(prev+2);
            vc.push_back(i+1);
            return vc;
        }
        else
        {
        	vc.push_back(-1);
            return vc;
        }
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
        vector<int>arr(n);
        // int arr[n];
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
