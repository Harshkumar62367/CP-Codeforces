#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int count=0;
	int a[123]={0};
	for(int i=0; i<s.length();i++)
	{
	    int x=s[i];
	    a[x]++;
	}
	int len=s.length();
	for(int i=95; i<123; i++)
	{
	    if(a[i]>0)
	    {
	        count++;
	    }
	}
	if(count%2==0)
	{
	    cout<<"CHAT WITH HER!";
	}
	else
	{
	    cout<<"IGNORE HIM!";
	}
	return 0;
}
