#include <stdio.h>
using namespace std;
int main()
{
    int i;
    int i2;
    double sum;
    scanf ("%d",&i);
    while (i != 0)
    {
        i2=i-1;
        sum = 0;
        if (i > 1)
        {
        for (int j=0;j<i2; j++)
        {
            sum = sum + double(j+1)/double(i2-j);
        }
        }
        sum = sum/double(i);
        printf("With %d competitors, a Jedi Knight will be replaced approximately %4.2f times.\n",i,sum);
        scanf ("%d",&i);
    }
    return 0;
}
