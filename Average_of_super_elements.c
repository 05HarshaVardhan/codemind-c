#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int k=-1;
    float cnt =0,s=0;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=0;j<n;j++)
        {
            if(x[i]==x[j] && i!=j)
            {
                c++;
                x[j] = -1;
            }
        }
        if(x[i] == c)
        {
            s+=x[i];
            cnt++;
            k=1;
            
        }
    }
    if(k==-1)
    printf("-1");
    else
    {
        printf("%.2f",(s/cnt));
    }
}