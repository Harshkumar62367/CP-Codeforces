#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }
    int l_sum=0,r_sum=0;
    for(int i=0;i<n;i++)
    {
        l_sum=l_sum+l[i];
        r_sum=r_sum+r[i];
    }
    if(l_sum>n/2 && r_sum>n/2)
    {
        cout<<(n-l_sum)+(n-r_sum);
    }
    else if(l_sum>n/2 && r_sum<=n/2)
    {
        cout<<(n-l_sum)+r_sum;
    }
    else if(l_sum<=n/2 && r_sum>n/2)
    {
        cout<<l_sum + (n-r_sum);
    }
    else if(l_sum<=n/2 && r_sum<=n/2)
    {
        cout<<l_sum + r_sum;
    }
	
	return 0;
}
