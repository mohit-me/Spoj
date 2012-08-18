#include<stdio.h>
#include<string.h>
#define max 105
int main()
{
	char a[max];
	int length=0,i=0,j=0,num_live=0,num_0=0,diff;
	gets(a);
	length=strlen(a);
	a[length]=a[0];
	length++;
	a[length]='\0';

		while(i<length-1)
		{
			if(a[i]=='0'&&a[i+1]=='0')
			  num_live++;
			if(a[i]=='0')
				num_0++;
			i++;
		}

		if(a[length]=='0') num_0++;
        diff=num_0*num_0-(length-1)*num_live;
         if (diff == 0) {
            printf("EQUAL");
        } else if (diff > 0) {
            printf("ROTATE");
        } else {
            printf("SHOOT");
        }


    return 0;
}
