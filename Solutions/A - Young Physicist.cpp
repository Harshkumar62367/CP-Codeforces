# include <stdio.h>
int main()
{
    int T,X=0,Y=0,Z=0;
    scanf("%d",&T);
    while(T--)
    {
         int x, y, z;
         scanf("%d %d %d",&x,&y,&z);
         X=X+x;
         Y=Y+y;
         Z=Z+z;
         

    }
    if(X==0 && Y==0 && Z==0)
    printf("YES");
    else
    printf("NO");

    return 0;
}
