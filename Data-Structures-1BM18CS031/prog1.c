#include<stdio.h>
#include<conio.h>
struct marks
{
  int marks[5];
};
void main()
{
 int i;
 struct marks sub;
 clrscr();

printf("Enter marks of the subjects\n");

 for(i=0; i<5; i++)
{
scanf("%d" , &sub.marks[i]);
}

 for(i=0; i<5; i++)
  {
    printf("subject %d marks = %d \n",i+1, sub.marks[i]);
  }

 getch();
}