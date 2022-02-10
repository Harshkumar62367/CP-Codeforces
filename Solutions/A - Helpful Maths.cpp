#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n = s.length()/2+1;
	int a[n];
	for(int i=0;i<s.length();i++)
	{
	    if(i%2==0)
	    {
	        a[i/2]=s[i];
	    }
	}
	sort(a, a+n);
	for(int i=0;i<n-1;i++)
	{
	    cout<<a[i]-48<<"+";
	}
	cout<<a[n-1]-48;
	
	return 0;
}



