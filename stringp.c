//WAP to check string is palindrome
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,l,a=0;

    printf("Enter the string ");
    scanf("%s",&s);

    l= strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
           a=1; 
           break;
        }
    }

    if (a==1)
    {
        printf("String is not palindrome");
    }
    else{
        printf("String is  palindrome");
    }
    
    return 0;
}