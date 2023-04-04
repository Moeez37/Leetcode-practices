//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        // O(|a|+|b|);
        unordered_map <char,int> mp;
        if(a.length()!=b.length())return false;
        else{
        for(int i=0;i<a.length();i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<b.length();i++)
        {
            auto k=mp.find(b[i]);
            if(k!=mp.end())
            {
                mp[b[i]]--;
                if(mp[b[i]]==0){mp.erase(b[i]);}
                else if(mp[b[i]]<0){return false;}
            }
            else{
                return false;
            }
        }
        return mp.empty();
        
    }
}
};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
