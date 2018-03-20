#include <stdio.h>
int main()
{
 int i,n,d[10];
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	scanf("%d",&d[i]);
 }
 for(i=n;i>=1;i--)
 {
 	printf("%d ",d[i]);
 }
	return 0;
}
