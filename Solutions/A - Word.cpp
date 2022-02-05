#include <iostream>
using namespace std;

int main() {
	string s;
	int count1=0, count2=0;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
	    if(s[i]<95)
	    {
	        count1++;
	    }
	    else if(s[i]>95)
	    {
	        count2++;
	    }
	}
	
	
	if(count1>count2)
	{
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i]>=97 && s[i]<=122)
	        {
	            s[i]=s[i]-32;
	        }
	    }
	    cout<<s;
	}
	else if(count2>=count1)
	{
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i]>=65 && s[i]<=90)
	        {
	            s[i]=s[i]+32;
	        }
	    }
	    cout<<s;
	}
	return 0;
}
