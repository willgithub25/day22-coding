#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,count=0;
	printf("Enter the value:");

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0){
        count+=1;

		}
	}
	printf("%d",count);
	printf("( ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0){

        printf("%d ",i);

		}
	}
	printf(")");



}
