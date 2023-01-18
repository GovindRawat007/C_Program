//WAP for binary search
#include<stdio.h>
int main()
{
    int i,f,e,m,n; 

    printf("Enter the size of array");
    scanf("&d",&n);

    printf("Enter the array \n");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to find ");
    scanf("%d",&e);
    
    f=0;
    int l=n-1;
    m=l/2;

    /* while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);*/

    while(f<=l)
    {
        if(a[m]<e)
        {
            f=m+1;
        }
        else if(a[m]==e)
        {
            printf("Element is found at %d",m+1);
            
            break;
        }
        else
        {
            l=m-1;
            m=(f+l)/2;
        }
        
    }
     if(f>l)
        {
            printf("Element is not found");
        }

    return 0;
}