#include<stdio.h>
#include<math.h>
int main(void)
{
   long int a,b,c,d;
    scanf("%ld%ld%ld",&a,&b,&c);
    d=pow(a,b);
    printf("%d",d%c);
	return 0;
}
