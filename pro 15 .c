#include <stdio.h>
int main()
{
	int i,j,s[3],n,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(s[i]<s[j])
		{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		}
		}
	}
		for(i=0;i<n;i++)
		printf("%d\n",s[i]);
	return 0;

}
