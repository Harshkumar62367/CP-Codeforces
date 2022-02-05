#include <iostream>
using namespace std;

int main() {
	int year, a, b, c, d, year_req;
	cin>>year;
	while(true)
	{
	    year++;
	    year_req=year;
	    a=year%10;
	    year=year/10;
	    b=year%10;
	    year=year/10;
	    c=year%10;
	    year=year/10;
	    d=year%10;
	    
	    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
	    {
	        cout<<year_req<<endl;
	        break;
	    }
	    else{
	        year=year_req;
	    }
	}
	return 0;
}
