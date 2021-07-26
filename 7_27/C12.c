#include <stdio.h> 
int main()
{
    int num,a,b,c,d,e;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int d1 = b-a;
        int d2 = b/a;
        if( d1 == (c - b) && d1 == (d - c))
        {
            e = d + d1;
        }
        else
        {
            e = d * d2;
        }
        printf("%d %d %d %d %d\n",a,b,c,d,e);
    }

    return 0;
}
