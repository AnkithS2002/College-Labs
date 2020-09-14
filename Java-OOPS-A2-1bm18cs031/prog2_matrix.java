/*Write an interactive program using two-dimensional arrays to
perform matrix addition and subtraction. The program asks the
user to input the number of rows and columns for matrix A and
matrix B . The user then enters the elements of each array. The
program should display the sum of matrices A and B, and the
differences of matrices A and B.*/


import java.util.*;
class Matrix
{
	public static void main(String args[])
	{
		
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the number of the rows");
		int r = sc.nextInt();
		System.out.println("Enter the number of the columns");
		int c = sc.nextInt();
		int a[][]= new int[r][c];

		int b[][]= new int[r][c];

		int i,j;
		System.out.println("Enter the array elements of Matrix A \n");
		for(i=0;i<r;i++)
		{
			System.out.println("Enter row " + (i+1));
			for(j=0;j<c;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}

		System.out.println("Enter the array elements of Matrix B \n");
		for(i=0;i<r;i++)
		{
			System.out.println("Enter row " + (i+1));
			for(j=0;j<c;j++)
			{
				b[i][j]=sc.nextInt();
			}
		}


		//Addition and Subtraction
		int add[][]= new int[r][c];

		int sub[][]= new int[r][c];
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				add[i][j]=a[i][j]+b[i][j];
			}
		}

		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				sub[i][j]=a[i][j]-b[i][j];
			}
		}

		System.out.println("On adding:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				System.out.print(add[i][j] + " ");
			}
		System.out.println();
		}
		System.out.println("On subtracting:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				System.out.print(sub[i][j] + " ");
			}
		System.out.println();
		}
	}
}
