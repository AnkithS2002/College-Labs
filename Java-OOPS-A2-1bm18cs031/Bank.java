/*Develop a Java program to create a class Bank that maintains two kinds of account for its customers, one called savings account and the other current account. The savings account provides compound interest and withdrawal facilities but no cheque book facility. The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance and if the balance falls below this level, a service charge is imposed.
Create a class Account that stores customer name, account number and type of account. From this derive the classes Curr-acct and Sav-acct to make them more specific to their requirements. Include the necessary methods in order to achieve the following tasks:
Accept deposit from customer and update the balance.
Display the balance.
Compute and deposit interest
Permit withdrawal and update the balance
Check for the minimum balance, impose penalty if necessary and update the balance.*/

import java.util.*;
class Account
{
	Scanner sc=new Scanner(System.in);
	String name,type;
	double deposit;
	double draw;
	long acc_no;
	double bal=0.0;
	
	void input()
	{
		System.out.println("Enter customer name, acc no. and type of account: ");
		name=sc.next();
		acc_no=sc.nextLong();
		type=sc.next();
	}
	void display()
	{
		System.out.println("Amount in the bank: "+deposit);
		System.out.println("Balance: "+bal);
	}
	void deposit()
	{
		System.out.println("Enter the amount to be deposited: ");
		deposit=sc.nextDouble();
		bal=bal+deposit;
	}
	void withdraw()
	{
		System.out.println("Enter the amount to be withdrawn: ");
		draw=sc.nextDouble();
		bal=bal-draw;
	}	
}
class Sav_acct extends Account
{
	final double r=5;
	int t;
	double interest;
	Scanner s=new Scanner(System.in);
	void input()
	{
		super.input();
		System.out.println("Enter the number of years: ");
		t=s.nextInt();
	}

	void interestCal()
	{

		interest=bal*(Math.pow((1+(r*0.01)),t));
		bal=bal+interest;
	}
	void display()
	{

		System.out.println("Interest : "+interest);
		super.display();
	}
}
class Curr_acct extends Account
{
	Scanner sc=new Scanner(System.in);
	final double min=1000.00;
	final double ser=800.00;
	void input()
	{
		super.input();
	}
	void service()
	{
		if(bal<min)
		bal=bal-ser;
	}
	void display()
	{
		super.display();
	}
}
class Bank
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 1 for savings 2 for current account");
		int ch=sc.nextInt();

		if(ch==1)
		{
			Sav_acct ob1=new Sav_acct();
			ob1.input();
			ob1.deposit();
			ob1.withdraw();
			ob1.interestCal();
			
			ob1.display();

		}
		else
		{
			Curr_acct ob2=new Curr_acct();
			ob2.input();
			ob2.deposit();
			ob2.withdraw();
			ob2.service();
			ob2.display();
		}

	}
}

