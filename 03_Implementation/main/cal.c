 #include <stdio.h>
 int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int factorial(); // it is header file, conatins all function
int main() {
  // variable declaration
  int choice; 
  int a1,a2, ans=0;
  printf("Select the operation you want perform");
  printf("1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Modules\n 6.Power\n 7.Factorial \n ");
  scanf("%d", &choice);

// switch statement
 switch (choice) {

    case 1:
      printf("Enter two number");
      scanf("%d %d",&a1,&a2);
      
      ans = addition(a1,a2); //calling addition function
      
      printf("answer=%d",ans);
      break;
    case 2:
     printf("Enter two number");
      scanf("%d %d",&a1,&a2);
      ans=subtraction(a1,a2); //calling subtraction function
      printf("answer=%d",ans);
      break;
    case 3:
      printf("Enter two number");
      scanf("%d %d",&a1,&a2);
      ans = multiplication(a1,a2); //calling multiply function 
      printf("answer=%d",ans);
      break;
    case 4:
      printf("Enter two number");
      scanf("%d %d",&a1,&a2);
     
     ans = division(a1,a2);    //calling division function
     printf("answer=%d",ans);

      break;
    case 5: 
        printf("Enter two number");
        scanf("%d %d",&a1,&a2);
       ans= modulus(a1,a2);  // calling madules function
       printf("answer=%d",ans);
        break;  
    case 6: 
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&a1);
 
        printf("power : ");
        scanf("%d",&a2);      // calling power function
       ans= power(a1,a2);
          printf("answer=%d",ans);
        break;  
    case 7: 
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&a1);
        ans = factorial(a1); //calling  factorial function
        printf("answer=%d",ans);
        break;  
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}