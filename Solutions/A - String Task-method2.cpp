#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,rs;
	cin>>s;
	for(int i=0; i<s.length();i++)
	{
	    if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y')
	    {
	        continue;
	    }
	    else
	    {
	        rs=rs+'.';
	    	rs+=towlower(s[i]);
	    }
	}
	cout<<rs;
	return 0;
}
