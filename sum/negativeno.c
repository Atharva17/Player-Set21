#include <stdio.h>
int main(void) 
{
  int n,num[10],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	 if(num[i]<0)
	  sum+=num[i];
	printf("sum of negative no is %d",sum);
	return 0;
}
