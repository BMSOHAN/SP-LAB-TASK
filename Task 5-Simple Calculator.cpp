                //Problem 05..
                // Simple Calculator....

#include<stdio.h>
int main()
{         int a,b;
          char ch;
          printf("Enter two number: ");//*****
          scanf("%d %d",&a,&b);//**
          printf("Choose(+,-,*,/ ): ");//*******
          scanf(" %c",&ch);//**
          switch(ch){
          case'+':
          printf("Additon= %d\n",a+b);
          break;
          case'-':
          printf("Subtraction = %d\n",a-b);
          break;
          case'*':
          printf("Multiplication = %d\n",a*b);
          break;
          case'/':
          printf("Division = %d\n",a/b);
          break;
          default:
          printf("Invalid!!\n");
          return 0;
        }
}
