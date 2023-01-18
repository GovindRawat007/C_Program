//WAP to check how many vowel,Consonant,digit in string 

#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter the string \n");
    scanf("%s",&s);

    int b=strlen(s);
    int c=0,d=0,v=0;

    for(int i=0;i<b;i++)
    {
        char a=s[i];

        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')) 
        {
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            {
                ++v;
            }
            else {
                ++c;
            }
        }

        else if(a>='0'&&a<='9')
        {
            ++d;
        }
    }

        printf("frequency of vowel is %d\n",v);
        printf("frequency of consonant is %d\n",c);
        printf("frequency of digit is %d\n",d);

    return 0;
}