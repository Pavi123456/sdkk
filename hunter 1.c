#include <stdio.h>
int main(void) {
	int i,j,m[20],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(m[i]==m[j+i])
			{
				printf("%d ",m[i]);
			}
		}
	}
	return 0;
}
