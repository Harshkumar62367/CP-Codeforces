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
	    int odd_num=0,even_num=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2==1)
	        {
	            if(a[i]>=odd_num)
	            {
	                odd_num=a[i];
	            }
	            else{
	                count++;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	        {
	            if(a[i]>=even_num)
	            {
	                even_num=a[i];
	            }
	            else{
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
