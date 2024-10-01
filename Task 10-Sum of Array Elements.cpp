                //Problem 10
                  //Sum of Array Elements..

     #include <stdio.h>
    int main() {

      int n, i, sum = 0;
        printf("Enter the number of elements in the array: ");
           scanf("%d", &n);

    int arr[n];
       printf("Enter %d integers:\n", n);
          for (i = 0; i < n; i++) {
              scanf("%d", &arr[i]);
        }
            for (i = 0; i < n; i++) {
                sum += arr[i];
             }
     printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
