#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0; i<n; i++)
	{
	    cin>>a[i]>>b[i];
	}
	int max=0,sum=0;
	for(int i=0; i<n; i++)
	{
	    sum=sum-a[i]+b[i];
	    if(sum>max)
	    {
	        max=sum;
	    }
	}
	cout<<max;
	return 0;
}
