#include <iostream>
using namespace std;
 
int main()
{
    int a[5][5],x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    int c,b,sum;
    c=abs(x-2);
    b=abs(y-2);
    sum=c+b;
    cout<<sum<<endl;
    
    return 0;
}
