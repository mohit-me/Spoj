#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_NUMBER_DIGITS	512
char PROC[MAX_NUMBER_DIGITS+10][MAX_NUMBER_DIGITS*2+10];
int PROC_LEN[MAX_NUMBER_DIGITS+10];
void reverse(char * const r,const int r_len)
{
	int a=0, b=r_len-1, bck;

	while (b>a)
	{
		bck=r[a];
		r[a++]=r[b];
		r[b--]=bck;
	}
}
int plus(char * const f, const int f_len,
		char * const s, const int s_len,
		const int null,
		char * const vysledek, int * const vysledek_len)
{
	int max_len=(s_len<(f_len+null)) ? (f_len+null) : s_len;
	int s_idx=0,f_idx=0,last=0,idx_null=null,nula=-1;
	int n;

	while (f_idx<max_len)
	{
		n=((s_len>s_idx)?(s[s_idx]-'0'):0) + ((idx_null>0)?0:((f_len>f_idx)?(f[f_idx]-'0'):0)) + last;
		if (n>9)
		{
			last=1;
			n-=10;
		}
		else last=0;
		vysledek[s_idx]=n+'0';

		if (!n && s_idx>0)
		{
			if (nula==-1) nula=s_idx;
		}
		else nula=-1;

		++s_idx;
		if (idx_null--<=0) ++f_idx;
	}

	if (last)
	{
		vysledek[s_idx++]='1';
		nula=-1;
	}

	if (nula>0) s_idx=nula;
	vysledek[s_idx]='\0';
	*vysledek_len=s_idx;
	return 3;
}

int minus(char * const f, const int f_len,
		char * const s, const int s_len,
		char * const vysledek, int * const vysledek_len)
{
	int max_len=(s_len<f_len) ? f_len : s_len;
	int idx=-1,last=0,null_idx=-1;
	int n;
	while (++idx<max_len)
	{
		n=(f[idx]-'0') - ((s_len>idx)?(s[idx]-'0'):0) - last;
		if (n<0)
		{
			last=1;
			n+=10;
		}
		else last=0;
		vysledek[idx]=n+'0';
		if (!n && idx>0)
		{
			if (null_idx==-1) null_idx=idx;
		}
		else null_idx=-1;
	}

	if (null_idx>0) idx=null_idx;
	vysledek[idx]='\0';
	*vysledek_len=idx;
	return 3;
}

int mult(char * const f, const int f_len,
		char * const s, const int s_len)
{
	int ret=2;
	int s_idx,f_idx;
	int n;
	int n_low,n_high;
	int ss;

	n_low=0;
	for(s_idx=0;s_idx<s_len;s_idx++)
	{
		ss=s[s_idx]-'0';
		f_idx=0;
		switch (ss)
		{
			case 0: PROC[ret][0]='0'; f_idx=1; break;
			case 1: strncpy(PROC[ret],f,f_len); f_idx=f_len; break;
			default:
				for(;f_idx<f_len;f_idx++)
				{
					n=ss * (f[f_idx]-'0') + n_low;
					n_low=n/10;
					n_high=n-n_low*10;
					PROC[ret][f_idx]=n_high+'0';
				}
				if (n_low)
				{
					PROC[ret][f_idx++]=n_low+'0';
					n_low=0;
				}
		}
		PROC[ret][f_idx]='\0';
		PROC_LEN[ret]=f_idx;
		ret++;
	}
	return ret;
}

void put_char(const int n,const char what)
{
	int a;
	for (a=0; a<n; a++)	putchar(what);
}

int main()
{
	int n,a,ll,dash,dashm,bl1,bl2;
	char op;
	char * f;
	char * s;

	scanf("%d\n",&n);
	while (n-->0)
	{
		scanf("%s\n",PROC[0]);

		a=1;
		f=PROC[0];
		while (isdigit(PROC[0][a++]));
		s=&PROC[0][a];
		op=PROC[0][a-1];
		PROC[0][a-1]='\0';

		PROC_LEN[0]=a-1;
		PROC_LEN[1]=strlen(s);
		strncpy(PROC[1],s,PROC_LEN[1]+1);

		reverse(PROC[0],PROC_LEN[0]);
		reverse(PROC[1],PROC_LEN[1]);

		if (op=='+')
			ll=plus(PROC[0],PROC_LEN[0],PROC[1],PROC_LEN[1],0,PROC[2],&PROC_LEN[2]);
		else
		if (op=='-')
			ll=minus(PROC[0],PROC_LEN[0],PROC[1],PROC_LEN[1],PROC[2],&PROC_LEN[2]);
		else
		if (op=='*')
			ll=mult(PROC[0],PROC_LEN[0],PROC[1],PROC_LEN[1]);

		reverse(PROC[0],PROC_LEN[0]);
		reverse(PROC[1],PROC_LEN[1]);

		dash=PROC_LEN[0]>(PROC_LEN[1]+1)?PROC_LEN[0]:PROC_LEN[1]+1;

		if (ll==3)
		{
			if (dash<PROC_LEN[2]) dash=PROC_LEN[2];
			reverse(PROC[2],PROC_LEN[2]);
			put_char(dash-PROC_LEN[0],' ');
			printf("%s\n",PROC[0]);

			put_char(dash-PROC_LEN[1]-1,' ');
			printf("%c%s\n",op,PROC[1]);

			dashm=(PROC_LEN[1]+1>PROC_LEN[2]?PROC_LEN[1]+1:PROC_LEN[2]);
			put_char(dash-dashm,' ');
			put_char(dashm,'-');
			putchar('\n');

			put_char(dash-PROC_LEN[2],' ');
			printf("%s\n",PROC[2]);
		}
		else
		{
			PROC[ll][0]='0'; PROC[ll][1]='\0'; PROC_LEN[ll]=1;
			bl1=ll; bl2=ll+1;
			for (a=2;a<ll;a++)
			{
				plus(PROC[a],PROC_LEN[a],PROC[bl1],PROC_LEN[bl1],a-2,PROC[bl2],&PROC_LEN[bl2]);
				dashm=bl2; bl2=bl1; bl1=dashm;
			}

			dashm=dash;
			if (dash<PROC_LEN[bl1]) dash=PROC_LEN[bl1];

			put_char(dash-PROC_LEN[0],' ');
			printf("%s\n",PROC[0]);

			put_char(dash-PROC_LEN[1]-1,' ');
			printf("%c%s\n",op,PROC[1]);

			dashm=(PROC_LEN[1]+1>PROC_LEN[2]?PROC_LEN[1]+1:PROC_LEN[2]);

			put_char(dash-dashm,' ');
			put_char(dashm,'-');
			putchar('\n');

			for (a=2;a<ll;a++)
			{
				reverse(PROC[a],PROC_LEN[a]);
				if (PROC_LEN[a])
				{
					put_char(dash-PROC_LEN[a]-(a-2),' ');
					printf("%s\n",PROC[a]);
				}
				else
				{
					put_char(dash-(a-2)-1,' ');
					printf("0\n");
				}
			}

			put_char(dash-PROC_LEN[bl1],' ');
			put_char(PROC_LEN[bl1],'-');
			putchar('\n');
			reverse(PROC[bl1],PROC_LEN[bl1]);
			put_char(dash-PROC_LEN[bl1],' ');
			printf("%s\n",PROC[bl1]);
		}
		putchar('\n');
	}
	return 0;
}
