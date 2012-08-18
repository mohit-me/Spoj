#include<stdio.h>

int main()
{
	int t, n, i, j, k, pr;
	int ar[201][201];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d", &ar[i][j]);
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					pr=1;
					if(k==i||k==j)
						continue;
					else
					{
						if(ar[i][k]+ar[k][j]==ar[i][j])
						{
							pr=0;
							break;
						}
					}
				}
				if(pr==1)
					printf("%d %d\n", i+1, j+1);
			}
		if(t>0)
			printf("\n");
	}
	return 0;
}