//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<char,char> mp;
        for(int i=0;i<patt.size();i++)
        {
            mp[patt[i]]++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(mp.find(str[i])!=mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
	
	return 0;
}

// } Driver Code Ends
