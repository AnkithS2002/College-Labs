/*Define a class called CUSTOMER with the following specifications: private members Customer_number, customer_name,
quantity, price, total_price, discount and net_price, public methods : 
1..a paarmeterized constructor to assign initial
2. input() function to read data members, call CalDiscount()
3. Caldiscount() to calculate discount according to total price and net price
TotalPrice=Price * Qty
TotalPrice>=50000 - Discount 25% of TotalPrice
TotalPrice>=25000 - Discount 10% of TotalPrice
NetPrice=TotalPrice-discount
4. Show() to display customer details

Develop a java program to accept details of n customers, calculate the discounts given to them and print their details*/

import java.util.Scanner;

class Customer
{
	private int number, quantity;
	private String name;
	private float price, total_price, discount, net_price;

	Customer(int n, int q, String nam, float pri) {
		number = n;
		quantity = q;
		name = nam;
		price = pri;
	}	

	void input()
	  {
		Scanner in = new Scanner(System.in);
		System.out.print("enter name: ");
		name = in.next();
		System.out.print("enter number: ");
		number = in.nextInt();
		System.out.print("enter quantity: ");
		quantity = in.nextInt();
		System.out.print("enter price: ");
		price = in.nextFloat();
		System.out.println();
		calcDiscount();
	}
	
	void calcDiscount()
	  {
		total_price = price * quantity;
		if (total_price >= 50000)
			discount = 0.25f * total_price;
		else if (total_price >= 25000)
			discount = 0.1f * total_price;
		else
			discount = 0; // no discount;
		net_price = total_price - discount;	
	}

	void show() 
	  {
		System.out.println("name: " + name);
		System.out.println("number: " + number);
		System.out.println("quantity: " + quantity);
		System.out.println("price: " + price);
		System.out.println("total_price: " + total_price);
		System.out.println("discount: " + discount);
		System.out.println("net_price: " + net_price);
		System.out.println();
	}
}	

class CustomerMain
{
	public static void main(String[] args) 
  	{
		Scanner in = new Scanner(System.in);
		System.out.print("enter number of customer: ");
		int n = in.nextInt();

		Customer[] customers = new Customer[n];

		for (int i = 0; i < n; i++)
    		{
			customers[i] = new Customer(); // use default constructor
			customers[i].input();
		}
		for (int i = 0; i < n; i++)
    		{
			customers[i].show();
		}
	}
}
