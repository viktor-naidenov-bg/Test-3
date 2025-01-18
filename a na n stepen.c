#include <stdio.h>
void main()
{   int i,n,m ;
    float a,p;
    printf("Enter random number");
    scanf("%f",&a);
    i=1;
    printf("Enter random number philips pro max");
    scanf("%d",&n);
    if(n<0)m=-n;
    else m=n;
    p=1;
    while(i<=m)
    {
        p=p*a;
        i++;
    }
    if(n<0)
    p=1/p;
    printf("P=%.2f",p);




}
