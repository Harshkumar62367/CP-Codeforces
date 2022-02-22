#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
	    for(int j=0; j<n;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0; j<n;j++)
	    {
	        if(i==j || i+j==n-1 || j==(n-1)/2 || i==(n-1)/2)
	        {
	            count+=a[i][j];
	        }
	    }
	}
	std::cout << count << std::endl;
	
	
	return 0;
}
