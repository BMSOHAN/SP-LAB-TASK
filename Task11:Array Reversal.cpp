                    //Problem 11
                     // Array Reversal..

#include<stdio.h>
int main()
{

    int arr[5],i;
      printf("enter elements of array = ");
       for(i=0;i<=4;i++)
      {
        scanf("%d",&arr[i]);
      }
      printf("Reverse array elements = \n");
        for(i=4;i>=0;i--)
      {
        printf("%d ",arr[i]);
      }
    return 0;
}
