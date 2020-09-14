/*Write an interactive program that reads elements of a one dimensional array, sorts the elements in ascending order, and
displays them.*/

import java.util.*;
class Ascending
{
	public static void main(String args[])
	{
		
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the size of the array \n");
		int n = sc.nextInt();
		int arr[]= new int[n];
		System.out.println("Enter the array elements \n");
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}

		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				{
					int t=arr[i];
					arr[i]=arr[j];
					arr[j]=t;
				}
			}
		}
		System.out.println("The array elements are :-\n");
		for(int i=0;i<n;i++)
		{
			System.out.println(arr[i]);
  		}

	}
}
