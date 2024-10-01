                    //Problem 07
                      //Reverse a Number

     #include<stdio.h>
          int main(){


   int a,remainder;
     printf("Enter an integer :\n");
       scanf("%d",&a);
        while (a>0){
            remainder = a % 10;
             printf("%d",remainder);
                 a = a/10;
        }

  return 0;
          }
