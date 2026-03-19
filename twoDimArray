#include <stdio.h>
#define COLUMNS 3
#define ROWS 2

int main(void) 
{
  int myGrades[] = {12, 23, 45};

  int grades[ROWS][COLUMNS] = {
    {12, 23, 45},
    {64, 78, 89}
  };
  
  printf("%d ", grades[1][2]);
  grades[1][2] = 30;
  printf("%d\n", grades[1][2]);

  for(int i=0;i<ROWS;i++)
    {
      for(int j=0;j<COLUMNS;j++)
      {
        printf("[%d][%d] = %d\t", i, j, grades[i][j]);
      }
      printf("\n");
    }




  
  return 0;
}