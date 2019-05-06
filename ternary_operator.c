#include<stdio.h>
int main()
{
        int a,b,c,g;
        printf("enter 3 number:\n");
        scanf("%d %d %d",&a,&b,&c);
        g=(a>b)?a:b;
        g=(g>c)?g:c;
        printf("%d is the greatest number",g);
return 0;
}

