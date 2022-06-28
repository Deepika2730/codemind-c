#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],s;
    
    scanf("%d",&i);
    
    for(r=0;r<i;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<i;r++)
    {
        s=0;
        for(c=0;c<2;c++)
        {
            s=s+a[r][c];
        }
        printf("%d
",s);
    }
    return 0;
}