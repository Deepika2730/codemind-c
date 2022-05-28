#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for( int i=0;i<n;i++)
    {
        int num;
        int ivar;
        float fvar;
        scanf("%d",&num);
        fvar=sqrt((double)num);
        ivar=fvar;
        if(ivar==fvar)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}