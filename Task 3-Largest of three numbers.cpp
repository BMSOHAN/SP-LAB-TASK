             // Problem 03..
                // Largest of Three numbers...

   #include<stdio.h>
       int main(){

   int a,b,c;
    printf("Enter any Three numbers:\n");
     scanf("%d%d%d",&a,&b,&c);
        if (a >= b) {
           if (a >= c) {
             printf(" %d\n", a);
        } else {
            printf(" %d\n", c);
        }
    } else {
        if (b >= c) {
            printf(" %d\n", b);
        } else {
            printf(" %d\n", c);
        }
    }
 return 0;
}
