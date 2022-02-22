#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[257]={0};
	string s;
	getline(cin, s);
	for(int i=1;i<s.length();i++)
	{
	    int x=s[i];
	    a[x]++;
	    
	    
	}
	int count=0;
	for(int i=97;i<=122;i++)
	{
	    if(a[i]>0)
	    {
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
