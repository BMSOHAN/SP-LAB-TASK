            // Problem 04
             //positive,Negative or Zero...

     #include<stdio.h>
         int main(){

    int a;
     printf("Enter any number:\n");
       scanf("%d",&a);
        if (a==0){
            printf(" Zero(0).\n");
        }  else if(a<0){
                printf("The value is Negative.\n");
        }   else{
              printf("The value is Positive.\n");
        }
  return 0;
         }
