//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        if(n==1)return 1;
        else{
		
			int sumfirst=a[0];
			int sum_last=a[n-1];
			int last=n-1;
            int i=0;
            while(i!=last)
            {
            	if(sumfirst==sum_last && last==i  (i+1>=0 && i+1<n) &&(last-1>=0 && last-1<n)  )
            	{
            		return i+1;
				}
				if(sumfirst<=sum_last  )
				{
					i++;
					sumfirst+=a[i];
					
				}
				if(sumfirst>=sum_last )
				{
					
					last--;
					sum_last+=a[last];
				}
			}
			if(sumfirst==sum_last && i==last)
			{
				return i+1;
			}
			else{
				return -1;
			}
    }}

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
