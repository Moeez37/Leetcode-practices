//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
string longestCommonPrefix (string arr[], int N)
{
    string comstr=arr[0];
    int count=0;
    string common="";
    if(N==1)return arr[0];
    while(count < comstr.length())
    {
        char compare=comstr[count];
        for(int index=1; index<N;index++)
        {
            if(arr[index].length() <= count || arr[index][count]!=compare)
            {
                if(common=="")return "-1";
                else 
                {
                    return common;
                }
            }
        }
        common+=compare;
        count++;
    }
    return common;
}

};

//{ Driver Code Starts.
int main()
{
    
    	string arr[]={"abcdefgh","abcd","abcdefg"};
        Solution ob;
        cout << ob.longestCommonPrefix (arr, 3) << endl;
}


