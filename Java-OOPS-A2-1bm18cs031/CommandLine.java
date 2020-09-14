//Write a program to print the largest integer amount all values 
//supplied as command line arguments.

import java.util.*;
class CommandLine
{
	public static void main(String args[])
	{
		int large=0;
		for(int i=0;i<args.length;i++)
		{
			if(Integer.parseInt(args[i])>large)
				large=Integer.parseInt(args[i]);
		}
		System.out.println("Largest number = "+large);
	}
}
