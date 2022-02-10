#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    float arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    float sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    float result=sum/(n);
    cout<<setprecision(9)<<result<<endl;
    
	return 0;
}
