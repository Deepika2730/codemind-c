#include<stdio.h>
int reverse(int n)
{
    int rev=0,r;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    do
    {
        n+=reverse(n);
    }
    while(n!=reverse(n));
    printf("%d",n);
}