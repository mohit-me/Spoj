#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, j, A, B, C;
    char ch, s[60],a[3][20];

    scanf("%d%c", &n, &ch);
    for (i = 0; i < n; i++)
    {
        scanf("%c", &ch);
        gets(s);
        sscanf(s, "%s + %s = %s", a[0], a[1], a[2]);
        for (j=0; j<3; j++)
        {
            if (strchr(a[j], 'm') != NULL) break;
        }
        if (j == 0)
        {
            sscanf(a[1], "%d", &B);
            sscanf(a[2], "%d", &C);
            printf("%d + %d = %d\n", C-B, B, C);
        }
        else if (j == 1)
        {
            sscanf(a[0], "%d", &A);
            sscanf(a[2], "%d", &C);
            printf("%d + %d = %d\n", A, C-A, C);
        }
        else
        {
            sscanf(a[0], "%d", &A);
            sscanf(a[1], "%d", &B);
            printf("%d + %d = %d\n", A, B, A+B);
        }
    }
    return 0;
}
