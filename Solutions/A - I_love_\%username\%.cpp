#include <iostream>
using namespace std;

int main() {
	int n;
	std::cin >> n;
	int a[n];
	int count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int min=a[0];
	for(int i=0;i<n;i++)
	{
	    if(min>a[i])
	    {
	        min=a[i];
	        count1++;
	    }
	}
	int max=a[0];
	for(int i=0;i<n;i++)
	{
	    if(max<a[i])
	    {
	        max=a[i];
	        count2++;
	    }
	}
	std::cout << count1+count2 << std::endl;
	return 0;
}
