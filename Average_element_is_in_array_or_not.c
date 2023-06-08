#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        s = s+x[i];
    }
    int t = s/n;
    
    
    int l = 0;
    int h =n-1;
    while(l<=h)
    {
        int mid  = (l+h)/2;
        if(x[mid] == t)
        {
            printf("True");
            return 0;
        }
        else if(x[mid] >t)
        {
            h = mid-1;
        }
        else
        {
            l = mid +1;
        }
    }
    printf("False");
    
}