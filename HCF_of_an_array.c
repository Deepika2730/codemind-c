#include<stdio.h>
int main()
{
    int s,i,g;
    scanf("%d",&s);
    int arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    g=arr[0];
    int j=1;
    while(j<s)
    {
        if(arr[j]%g==0)
        {
            j++;
        }
        else
        {
            g=arr[j]%g;
            i++;
        }
    }
    printf("%d",g);
    return 0;
}