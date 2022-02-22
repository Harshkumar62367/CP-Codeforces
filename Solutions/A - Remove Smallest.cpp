#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    int count=0;
	    if(n>1)
	    {
	        for(int i=0;i<n-1;i++)
	        {
	            if(a[i+1]-a[i]>1)
	            {
	                count++;
	            }
	        }
	    }
	    if(count>0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	        
	}
	return 0;
}
