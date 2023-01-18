#include<stdio.h>

    /*write a program to input a,b. Let a,b playing the game in which a enter a number and ask b to
      find the number next to this which is prime as well as palindrome. Help b to find such number 
      by generating a program for same using function with parameter or call by value*/ 

palindrome()    
{
    int n, t, r = 0, c, d;

    printf("Enter an integer\n");
    scanf("%d", &n);

    while (2)
    {
        n++;
        t = n;

        // Calculating reverse of the number
        while(t)
        {
            r = r*10;
            r = r + t%10;
            t = t/10;
        }

        // If reverse equals original then it's a palindrome
        if (r == n)
        {
            d = (int)sqrt(n);

            // Checking prime 

            for (c = 2; c <= d; c++)
            {
                if (n%c == 0)
                break;
            }
            if (c == d+1)
                break;
        }
        r = 0;
    }
    printf("%d\n",n);
}

void main()
{ 
   palindrome();
}