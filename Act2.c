#include <stdio.h>

int main()
{
   int i,b,a[20];



   printf("Input the number of elements to store in the array :");
   scanf("%d",&a);

   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<a;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&b[i]);
	  }

   printf("\nThe values store into the array are : \n");
   for(i=0;i<a;i++)
     {
	   printf("% 5d",b[i]);
	 }

   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=a-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
}
