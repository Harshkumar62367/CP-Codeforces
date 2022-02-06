#include <iostream>
using namespace std;

int main() {
	int a,b,pr;
	cin>>a>>b;
	pr=a;
	while(true)
	{
	    int count=0;
	    pr++;
	    for(int i=1;i<=pr;i++)
	    {
	        if(pr%i==0)
	        {
	            count++;
	        }
	    }
	    if(count==2)
	    {
	        if(pr==b)
	        {
	            cout<<"YES"<<endl;
	            break;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    
	}
	return 0;
}
