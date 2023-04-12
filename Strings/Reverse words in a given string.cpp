//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       stack<string> st;
       string s="";
       for(int i=0;i<S.length();i++)
       {
           if(S[i]=='.')
           {
               st.push(s);
               s="";
           }
           else{
               s+=S[i];
           }
       }
       st.push(s);
       s="";
       while(!st.empty())
       {
           s+=st.top();
           st.pop();
           if(!st.empty()){
           s+='.';}
       }
       
       return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
