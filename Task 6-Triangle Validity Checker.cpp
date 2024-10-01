                    //Problem 06
                      //Triangle Validity Checker..

     #include<stdio.h>
        int main(){

    float x,y,z;
       printf("Enter three lengths:");
          scanf("%f %f %f",&x,&y,&z);
            if (x+z>y && x+y>z && y+z>x){
                printf("This is a Triangle.");
            }   else {
                  printf("This is not a Triangle!!");
            }
   return 0;
             }
