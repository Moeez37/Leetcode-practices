//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;




class Solution
{public:
  void sort012(int a[], int n)
{
    int m=0;
    int l=0;
    int high=n-1;
    while(m<=high)
    {
        if(a[m]==0)
        {
            swap(a[m],a[l]);
            m++;l++;
        }
        else if(a[m]==1)
        {
            m++;
        }
        else
        {
            swap(a[m],a[high]);
            high--;
        }
    }
   
}   
};

//{ Driver Code Starts.
int main() {

    
    return 0;
}

