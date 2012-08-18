#include <stdio.h>

int main()
{
    char s[1024];
    int len;
    int i;
    char end = 1;
    int words;
    char* c;
  
    while(gets(s) != NULL)
    {
        words = 0;
        c = s;
      
        while(*c)
        {
            if (((*c >= 'a') && (*c <= 'z')) ||
               ((*c >= 'A') && (*c <= 'Z')))
            {
                if (end)
                {
                    end = 0;
                    words++;
                }
            }
            else if (!end)
              end = 1;
            c++;
        }
      
        printf("%d\n", words);
    }
  
    return 0;
}