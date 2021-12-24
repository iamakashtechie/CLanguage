#include <stdio.h>
void main()
{
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  switch(n)
  {
    case 1 :
      printf("Good Morning !");
      break;
    case 2 :
      printf("Good Afternoon !");
      break;
    case 3 :
      printf("Good Evening !");
      break;
    case 4 :
      printf("Good Night !");
      break;
    default :
      printf("Wrong input !!");
  }
}