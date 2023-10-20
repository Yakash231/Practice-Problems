// Sparse Addition

#include <stdio.h>
void add(int s[][])
{

}

int main() {
    int row,col;
    printf("Enter The Rows: ");
    scanf("%d",&row);
    printf("Enter The Columns: ");
    scanf("%d",&col);
  printf("Enter The Matrix: ");
  int a[row][col];
  for(int i=0; i<row; i++)
  {
      for(int j=0; j<col; j++)
      {
          printf("a[%d][%d]=",i,j);
          scanf("%d",&a[i][j]);
      }
      printf("\n");
  }
  int count=0;
   for(int i=0; i<row; i++)
  {
      for(int j=0; j<col; j++)
      {
          if(a[i][j]!=0)
          {
              count++;
          }
      }
     // printf("\n");
  }
  int s[count+1][3];
  s[0][0]=0;
  s[0][1]=0;
  s[0][2]=count;
  int c=1;
   for(int i=0; i<row; i++)
  {
      for(int j=0; j<col; j++)
      {
        if(a[i][j]!=0)
          {
            s[c][0]=i;
            s[c][1]=j;
            s[c][2]=a[i][j];
            c++;
          }  
      }
  }
   

    return 0;
}