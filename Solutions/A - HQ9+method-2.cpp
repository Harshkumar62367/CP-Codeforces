#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int count=0;
	for(int i=0; i<s.length(); i++)
	{
	    if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
	    {
	        count++;
	    }
	}
	if(count>0)
	{
	    std::cout << "YES" << std::endl;
	}
	else
	{
	    cout<<"NO";
	}
	return 0;
}
