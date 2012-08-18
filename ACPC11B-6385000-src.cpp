#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
        long int t,i,j,k,p,q,a[1020],b[1020],g;
        long int l;
        char *pEnd;
        char s[8500],x[8500],y[20];
        scanf("%ld",&t);
        getchar();
        while(t--)
        {
                l=0;
                fgets(s,8500,stdin);
                sscanf(s,"%ld",&p);
                p=strtol (s,&pEnd,10);
                //-printf("%ld",p);
                //-l=sprintf (y,"%ld",p);
                j=0;
		g=p;
		while(1)
		{
			j++;
			g=g/10;
			if(g==0)
			break;

		}
		//printf("%ld\n",j);
		l=j;
                for(i=0;i<p;i++)
                {
                	a[i]=strtol (s+(++l),&pEnd,10);
		        //-sscanf(s+(++l),"%ld",&a[i]);
                        //-printf(" %ld ",a[i]);
                        //-l=l+sprintf (y,"%ld",a[i]);
			j=0;
			g=a[i];
			while(1)
			{
				j++;
				g=g/10;
				if(!g)
				break;

			}
			//printf("%ld\n",j);
			l=l+j;
                }
                //printf("\n");
                fgets(x,8500,stdin);
                sscanf(x,"%ld",&q);
                //-printf("%ld",p);
                j=1;
                g=q;
                while(1)
                {
                	g=g/10;
                	if(!g)
                	break;
                	j++;
                }
                //sprintf (y,"%ld",q);
                l=j;
                for(i=0;i<q;i++)
                {
                	b[i]=strtol (x+(++l),&pEnd,10);
                        //sscanf(x+(++l),"%ld",&b[i]);
                        //-printf(" %ld ",b[i]);
                        //l=l+sprintf (y,"%ld",b[i]);
			j=1;
			g=b[i];
			while(1)
			{
				g=g/10;
				if(!g)
				break;
				j++;
			}
			l+=j;
			//sprintf (y,"%ld",q);

                }
                k=2000000000;
                for(i=0;i<p;i++)
                {
                	for(j=0;j<q;j++)
                	{
                		if(labs(a[i]-b[j])<=k)
                		k=labs(a[i]-b[j]);
                	}
                }
                printf("%ld\n",k);

        }
        return 0;
}
