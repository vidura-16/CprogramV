#include <stdio.h>
void insSort(int A[]);
void printArray(int A[]);

void main()
{
   int A[10];
   for (int i=0;i<10;i++)
{
  printf("Array[%d] : ",i);
  scanf ("%d",&A[i]);
}
  printArray(A);
  printf("\nSorted Array\n");
  insSort(A);
}

void printArray(int A[])
{
     for(int i=0;i<10;i++)
     printf("%d\t" ,A[i]);   
}

void insSort(int A[])
{
   int i,key;
   for (int j=2;j<10;j++)
   {
   i=0;
   while (A[j]>A[i])
   i++;
   key=A[j];
    for (int k=0;k<j-i-1;k++)
    A[j-k]=A[j-k-1];
    A[i]=key;
    }
   printArray(A);
  } 

