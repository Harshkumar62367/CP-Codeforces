#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i]>>b[i];
	}
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        if(a[i]==b[j])
	        {
	            count++;
	        }
	    }
	}
	std::cout << count << std::endl;
	return 0;
}
