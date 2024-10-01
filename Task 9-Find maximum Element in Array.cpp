                 //Problem 09
                  //Find maximum Element in Array...

        #include <stdio.h>

int main() {
    int n, i, max;
       printf("Enter the number of elements in the array: ");
           scanf("%d", &n);

    int arr[n];
       printf("Enter %d elements:\n", n);
          for (i = 0; i < n; i++) {
             scanf("%d", &arr[i]);
         }
       max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
      printf("The maximum element in the array is: %d\n", max);

    return 0;
}
