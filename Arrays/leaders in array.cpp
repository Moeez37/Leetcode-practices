
#include <bits/stdc++.h>
using namespace std;



    

class Solution{

    public:
    vector<int> leaders(int a[], int n){
        vector<int> ret;
        int count=0;
        ret.push_back(a[n-1]);
        for(int index=n-2;index>=0;index--)
        {
            if(a[index]>=ret[count])
            {
                count++;
                ret.push_back(a[index]);
            }
        }
        count=ret.size()-1;
        int x=0;
        while(count>x)
        {
            swap(ret[count],ret[x]);
            x++;
            count--;
            
        }
        return ret;
    }
};



int main()
{
   
}


