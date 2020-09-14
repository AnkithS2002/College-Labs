#include<conio.h>
#include<stdio.h>
struct marks
{
  int marks[5];
};
void main()
{
 int credits[5]={2,3,4,5,6};
 int i, k;
 int total=0;
 float sgpa;
 char grade;
 struct marks sub;
 clrscr();

printf("Enter marks of the subjects\n");

for(i=0; i<5; i++)
{
scanf("%d" , &sub.marks[i]);
}

for(i=0;i<5;i++)
{
 if(sub.marks[i]>=0 && sub.marks[i]<=40)
 { grade='D';
  k=6;}

  else if(sub.marks[i]>40 && sub.marks[i]<60)
 { grade='C';
  k=7;}

  else if(sub.marks[i]>=60 && sub.marks[i]<75)
 { grade='B';
  k=8;
     }
  else if(sub.marks[i]>=75 && sub.marks[i]<90)
 { grade='A';
  k=9;
   }
  else{
  grade='S';
  k=10; }
 printf("subject %d grade = %c \n",i+1, grade);


//calculate sgpa

  total+=k*credits[i];
}
 

 sgpa=total/20.0;

 printf("SGPA = %f", sgpa);
 getch();
}
