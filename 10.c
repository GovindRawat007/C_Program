#include<stdio.h>
void main()
{
    char c[50];
    
    printf("Enter string ");
    gets(c);
    
    printf("all allphabats are ");
    
    for(int i=0;i<=strlen(c);i++)
    {
        c=s[i];
        if (s[i]>=65)
        {
            if (s[i]<=90)
            {
                printf("covered");
            }
        }

        else {
            prints("not covered");
        }
    }
}


