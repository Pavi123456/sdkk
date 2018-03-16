#include <stdio.h>
int main(void) {
	int n,k,rem;
	printf("the prime number between  are\n");
	for(n=2;n<=10;++n)
	{
		rem =0;
		for(k=2;k<=n/2;k++)
		{
			if(n%k==0)
			{
				rem++;
				break;
				
			}
		}
		if(rem==0)
		printf(" %d",n);
	}
	return 0;
}
