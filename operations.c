#include<stdio.h>
#include<stdlib.h>
void read(int m[10][10], int n[10][10],int n1,int n2)
{
  printf("for the first matrix\n");
  for(int i=0;i<n1;i++)
  {
 for(int j=0;j<n2;j++)
 {
   printf("enter element [%d][%d]:",i+1,j+1);
   scanf("%d",&m[i][j]);
 }
  }
 printf("for the second matrix\n");
  for(int i=0;i<n1;i++)
  {
 for(int j=0;j<n2;j++)
 {
   printf("enter element [%d][%d]:",i+1,j+1);
   scanf("%d",&n[i][j]);
 }
  }
}
void add(int m[10][10], int n[10][10], int sum[10][10],int n1,int n2)
{
  for(int i=0;i<n1;i++)
    for(int j=0;j<n2;j++)
      sum[i][j] = m[i][j] + n[i][j];
}
void multiply(int m[10][10], int n[10][10], int result[10][10],int n1,int n2)
{
  for(int i=0; i < n1; i++)
  {
    for(int j=0; j < n2; j++)
    {
      result[i][j] = 0; 
      for (int k = 0; k < 3; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}
void transpose(int matrix[10][10], int trans[10][10],int n1,int n2)
{
  for (int i = 0; i < n1; i++)
    for (int j = 0; j < n2; j++)
      trans[i][j] = matrix[j][i];
}
void display(int matrix[10][10],int n1,int n2)
{
  for(int i=0; i<n1; i++)
  {
    for(int j=0; j<n2; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n");
  }
}
int main()
{
int n1,n2;
int a[10][10],b[10][10],c[10][10];
printf("enter no of rows:");
scanf("%d",&n1);
printf("enter no of columns:");
scanf("%d",&n2);
  int choice;
  do
  {
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Read\n");
    printf("2. Addition\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        read(a,b,n1,n2);
        break;
      
      case 2:
        add(a,b,c,n1,n2);
        printf("sum of matrix: \n");
        display(c,n1,n2);
        break;
      case 3:
        multiply(a,b,c,n1,n2);
        printf("multiplication of matrix: \n");
       display(c,n1,n2);
        break;
      case 4:
        printf("Transpose of the first matrix: \n");
        transpose(a, c,n1,n2);
        display(c,n1,n2);
        printf("Transpose of the second matrix: \n");
        transpose(b,c,n1,n2);
        display(c,n1,n2);
        break;
      case 5:
        printf("Thank You.\n");
        exit(0);
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);

  return 0;
}

