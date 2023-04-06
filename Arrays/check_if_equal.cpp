//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int> b;
        for(int i=0;i<A.size();i++)
        {
            b[A[i]]++;
        }
        for(int i=0;i<B.size();i++)
        {
                if(b.find(B[i])!=b.end())
                {
                    b[B[i]]--;
                    if(b[B[i]]==0)
                    {
                        b.erase(B[i]);
                    }
                }
                
        }
         return (b.empty()==true)?  true: false;
    }
};

//{ Driver Code Starts.
int main()
 {
	return 0;
}
// } Driver Code Ends
