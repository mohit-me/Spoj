#include<stdio.h>
#include<string.h>
int main()
{
	long int t,t1;
	int n,i,j,k,flag,h;
	char s[700][1025],p[2200];
	int a[400];
	scanf("%ld",&t);
	t1=t;
	while(t--)
	{
		scanf("%d",&n);
		getchar();
		for(i=1;i<n;i++)
		{
			fflush(stdin);
			fgets(p,2197,stdin);
			p[(strlen(p))-1]=p[strlen(p)];
			sscanf(p,"%s %s",s[(2*i)-1],s[(2*i)]);
		}
		for(i=1;i<n;i++)
		{
			flag=0;
			for(j=1;j<n;j++)
			{
				if(strcmp(s[(2*i)-1],s[(2*j)])==0)
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				a[1] = (2*i)-1;
				break;
			}

		}
		k=a[1];
		for(i=1;i<n;i++)
		{
			a[i+1]=k+1;
			for(j=1;j<n;j++)
			{
				if(strcmp(s[(2*j)-1],s[k+1])==0)
				{
					k=(2*j)-1;
					break;
				}
			}

		}
		printf("Scenario #%ld:\n",t1-t);
		for(i=1;i<=n;i++)
		{
			h=a[i];
			printf("%s\n",s[h]);
		}
		printf("\n");

	}
	return 0;

}

