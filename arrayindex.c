#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
  clrscr();
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d %d",i,a[i]);
	}
return 0;
}
