#include <stdio.h>

int main(void) {
  int i, temp, size, num, pos;
  int myList[] = {1,2,3,4,5,6,7,8};
  size = sizeof(myList)/sizeof(myList[0]);
  
  for(i=0;i<size/2;i++)
    {
      temp = myList[i];
      myList[i] = myList[size-i-1];
      myList[size-i-1] = temp;
    }

  for(i=0;i<size;i++)
    {
      printf("%d ",myList[i]);
    }

  /*printf("\nEnter the # you want to insert: ");
  scanf(" %d", &num);
  printf("Enter the position you want to put it in: ");
  scanf(" %d", &pos);

  for(i=size;i>=pos;i--)
    {
      myList[i] = myList[i-1];
    }
  myList[pos-1] = num;
  size++;
  
  for(i=0;i<size;i++)
    {
      printf("%d ",myList[i]);
    }*/
  printf("\nEnter the number you want to insert: ");
  scanf(" %d",&num);

  printf("Enter what position to put it to: ");
  scanf(" %d",&pos);
  for (i=size;i>=pos;i--)
    {
      myList[i] = myList[i-1];
    }
  myList[pos-1] = num;
  size++;
  printf("Here is your list: \n");
  for(i=0;i<size;i++)
    {
        printf("%d: %d\n",i+1, myList[i]);
    }
  return 0;
}

