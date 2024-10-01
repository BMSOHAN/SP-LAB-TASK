                //Problem 14
                  //Print numbers from 1 to N

    #include <stdio.h>
       int main() {
          int n, i;
            printf("Enter a positive Number: ");
              scanf("%d", &n);

         printf("Numbers from 1 to %d:\n", n);
           for (i = 1; i <= n; i++) {
             printf("%d ", i);
            }
    return 0;
}

