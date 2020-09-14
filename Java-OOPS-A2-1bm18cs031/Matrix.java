/*Write a program to implement a class MATRIX for 2 X 2 Matrix. Include a default constructor, copy constructor, an inverse( ) function 
that returns the inverse of the matrix, a determinant( ) function that returns the determinant of the matrix, a Boolean function 
isSingular( )
that returns 1 or 0 according to whether the determinant is 0 and a print( ) function to print the details.*/


import java.util.*;
class Matrix2
{
int m[][]=new int[2][2];
Matrix()
{
int m[][]={0};
}
Matrix(Matrix ob)
{
int i,j;
for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   m[i][j]=ob.m[i][j];
  }
}
int determinant()
{
double det=(m[0][0]*m[1][1])-(m[0][1]*m[1][0]);
return det;
}
void inverse()
{
if(singular()==0)
{System.out.println("Inverse does not exist");
return;}
else if(singular()==1)
{
int m1=new int[2][2];
m1[0][0]=ob.m[1][1];
m1[1][1]=ob.m[0][0];
m1[0][1]=-ob.m[1][0];
m1[1][0]=-ob.m[0][1];
print(m1);
}
else
System.out.println("Invalid");
}
int singular()
{
if(determinant()==0)
System.out.println("Singular matrix");
return 0;
else
System.out.println("Inverse exist");
return 1;
}
void print(int m1[2][2])
{
for(int i=0;i<2;i++)
 {
for(int j=0;j<2;j++)
  {
System.out.println(m1[i][j]);
  }
 }
}
class Matrixtd
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
Matrix m1=new Matrix();
System.out.println("Enter values in 2-D matrix");
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
m1.m=[i][j]=sc.nextInt();
}
Matrix m2=new Matrix(m1);
m2.inverse();
}
}



