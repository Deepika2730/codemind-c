#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100],c=0,r,f=1;
    while(n!=0)
    {
        r=n%10;
        a[c]=r;
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
                f=0;
            }
        }
    }
    if(f==1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}