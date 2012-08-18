#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int l,h,m;
	char s[10];
	scanf("%d %d",&l,&h);
	getchar();
	while(1)
	{
		m=(h-l)/2;
		m+=l;
		printf("%d\n",m);
		fflush(stdout);
		scanf("%s",s);
		if(strncmp (s,"L",1)==0)
		{
			l=m+1;
			continue;
		}
		if(strncmp (s,"H",1)==0)
		{
			h=m-1;
			continue;
		}
		if(strncmp (s,"W",1)==0)
		{
			break;
		}
	}
	return 0;
}
