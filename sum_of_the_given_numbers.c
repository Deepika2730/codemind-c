#include<stdio.h>
int main()
{
    int i,j,rows,columns,a[10][10],sum;
    scanf("%d",&i);
    for(rows=0;rows<i;rows++)
    {
        for(columns=0;columns<2;columns++)
        {
            scanf("%d",&a[rows][columns]);
        }
    }
    for(rows=0;rows<i;rows++)
    {
        sum=0;
        for(columns=0;columns<2;columns++)
        {
            sum=sum+a[rows][columns];
        }
        printf("%d
",sum);
    }
    return 0;
}