#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	while(n--)
	{
	    string s;
	    cin>>s;
	    if(s[1]=='+')
	    {
	        count++;
	    }
	    else if(s[1]=='-')
	    {
	        count--;
	    }
	}
	cout<<count;
	
	return 0;
}
