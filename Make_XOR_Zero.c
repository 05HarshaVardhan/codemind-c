#include<stdio.h>
int xora(int *arr,int data,int add,int n)
{
    int res=0;
    for (int i=0;i<n;i++)
    {
        res^=((arr[i]+data)&add);
    }
    return res;
}
int solve(int *arr,int n)
{
    int add=1;
    int res=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
        }
    }
    int xr;
    while(add<m)
    {
        xr=xora(arr,res,add,n);
        if(xr!=0)
        {
            res+=add;
        }
        add++;
    
    }
    xr=0;
    for(int i=0;i<n;i++)

    {
        xr^=(arr[i]+res);
    }
    if(xr==0)
    {
        return res;
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",solve(arr,n));
}