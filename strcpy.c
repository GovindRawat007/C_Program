#include <stdio.h>
#include <string.h>

void main()
{
    char a[25] = "hello";
    char b[25];

    
    strcpy(b,a) ;

    printf("%s\n",a);
    printf("%s\n",b);

}