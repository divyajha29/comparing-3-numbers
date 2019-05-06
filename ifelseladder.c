#include<stdio.h>
int main()
{
        int a,b,c,g;
        printf("enter 3 nos:\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a>b&&a>c)
        {
                g=a;
        }
        else if(b>a&&b>c)
        {
                g=b;
        }
        else if(c>a&&c>b)
        {
                g=c;
        }
        printf("%d is the greatest number",g);
}











