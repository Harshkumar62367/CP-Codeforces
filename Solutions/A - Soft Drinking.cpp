#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int a=(k*l)/nl;
	int b=c*d;
	int m=p/np;
	int res=min(a,min(b,m));
	cout<<res/n;
	return 0;
}
