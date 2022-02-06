#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
	int x=0,y=0;
	int min=arr[0];
	for(int i=1; i<n; i++)
	{
	    if(min>=arr[i])
	    {
	        min=arr[i];
	        x=i;
	    }
	}
	int max=arr[0];
	for(int i=1; i<n; i++)
	{
	    if(max<arr[i])
	    {
	        max=arr[i];
	        y=i;
	    }
	}
    if(y>x)
	{
	    x=n-x;
	    std::cout << x+y-2 << std::endl;
	}
	 else if(x>y)
	{
	    x=n-x;
	    cout<<x+y-1;
	}
	return 0;
}
