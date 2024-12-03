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


#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
int arr[n];
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Reversed: ");
for(int i = n - 1; i >= 0; i--) {
printf("%d ", arr[i]);
}
return 0;
}