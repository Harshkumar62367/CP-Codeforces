#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
	    cin>>a[i];
	    sum+=a[i];
	}
	
	int sum_half=sum/2;
	int count_sum=0,coins=0;
	sort(a, a+n);
	reverse(a, a+n);
	for(int i=0; i<n; i++)
	{
	    if(count_sum>sum_half)
	    {
	        break;
	    }
	    else{
	        count_sum+=a[i];
	        coins++;
	    }
	    
	}
	cout<<coins;
	
	return 0;
}
