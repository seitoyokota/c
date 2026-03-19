#include <stdio.h>

int main(void) {
  printf("Class System\n\n");
  int menu1, menu2;

  printf("Menu Items\n1.\tEnglish\n2.\tScience\n3.\tMath\n4.\tHistory\n5.\tElectives\n6.\tQuit\n\n");
  printf("Enter the number of the subject you want: ");
  scanf(" %d", &menu1);
  switch(menu1){
    case 1: printf("You chose English\n");
      break;
    case 2: printf("You chose Science\n");
      break;
    case 3: printf("You chose Math\n");
      break;
    case 4: printf("You chose History\n");
      break;
    case 5: printf("You chose Electives\n");
      printf("Electives:\n1.\tCS\n2.\tHS\n3.\tEngineering\n4.\tJROTC\n5.\tConstruction\n6.\tQuit\n\nChoose an elective: "); scanf(" %d", &menu2);
      break;
    default: printf("Thank you for using the System");
      break;
  }

  switch(menu2){
    case 1: printf("You chose Computer Science\n");
      break;
    case 2: printf("You chose Health Science");
      break;
    case 3: printf("You chose Engineering\n");
      break;
    case 4: printf("You chose JROTC\n");
      break;
    case 5: printf("You chose Construction\n");
      break;
    
  }

  













  
  return 0;
}