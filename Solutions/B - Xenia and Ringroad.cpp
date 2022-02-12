#include <iostream>
using namespace std;

int main() {
    long long int n,m;
    cin>>n>>m;
    long long int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    long long int count=0, house=1;
    for(int i=0;i<m;i++)
    {
        if(a[i]>house)
        {
            count=count+(a[i]-house);
            house=a[i];
        }
        else if(house>a[i])
        {
            count=count+(n-(house-a[i]));
            house=a[i];
        }
    }
    cout<<count;
	return 0;
}
