#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];
        }
    }
    int diff;
    if(s1>s2)
    {
        diff=s1-s2;
    }
    else if(s2>s1)
    {
        diff=s2-s1;
    }
    if(diff%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}