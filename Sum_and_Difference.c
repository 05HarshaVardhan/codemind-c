#include<stdio.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    printf("%d %d
",(a+b),(a-b));
    printf("%.1f %.1f",(c+d),(c-d));
}