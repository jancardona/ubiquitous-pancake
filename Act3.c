#include <stdio.h>

int main()
{
    int values[20];
    int i, n, sum=0;




       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&values[i]);
	    }

    for(i=0; i<n; i++)
    {
        sum += values[i];
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);
}
