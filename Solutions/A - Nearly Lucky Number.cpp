#include <iostream>
using namespace std;

int main() {
	unsigned long long int a;
	int count=0,r,count2=0,r2,count3=0;
	cin>>a;
	while(a>0)
	{
	    r=a%10;
	    if(r==7 || r==4)
	    {
	        count++;
	    }
	    a=a/10;
	}
	int count4=count;
	while(count>0)
	{
	    r2=count%10;
	    if(r2==7 || r2==4)
	    {
	        count2++;
	    }
	    count3++;
	    count=count/10;
	}
	if(count4==0)
	{
	    cout<<"NO"<<endl;
	}
	else if(count3==count2)
	{
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
