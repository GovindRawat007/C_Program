#include <stdio.h>
#include <string.h>

void main()
{
    char a[25] = "hello";
    char b[25]="world";

    
    strcat(a,b) ;

    printf("%s",a);
    printf("%s",b);

}