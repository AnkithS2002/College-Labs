/*Create a class Book which contains four members: name, author,
price, num_pages. Include a constructor to set the values for the
members. Include methods to set and get the details of the objects.
Include a toString( ) method that could display the complete details
of the book. Develop a Java program to create n book objects.*/



import java.util.*;
class BOOK
{
String name;
String author;
double price;
int num_pages;
BOOK()
{
name="Invalid";
author="Invalid";
price=0.0;
num_pages=0;
}
void set(String name,String author,double price,int num_pages)
{
this.name=name;
this.author=author;
this.price=price;
this.num_pages=num_pages;
}
/*
void get()
{
System.out.println("Name="+name);
System.out.println("Author="+author);
System.out.println("Price="+price+"and Number of pages="+num_pages);
}*/
public String toString()
{
String a="\nBook name=";
String b="\nAuthor name=";
String c="\nPrice=";
String d="\nNumber of pages=";
return(a+name+b+author+c+price+d+num_pages);
}
}

class BOOKDET
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String name,author;
double price;
int num_pages;
System.out.println("Enter the number of books");
int n=sc.nextInt();
BOOK b[]=new BOOK[n];

for(int i=0;i<n;i++)
{
b[i]=new BOOK();
}

System.out.println("*** Enter the book details ***");
for(int i=0;i<n;i++)
{
System.out.println("Enter details of book"+(i+1));
System.out.println("Enter name of book");
name=sc.next();
System.out.println("Enter Author");
author=sc.next();
System.out.println("Enter Price and Number of pages");
price=sc.nextDouble();
num_pages=sc.nextInt();
b[i].set(name,author,price,num_pages);
}
for(int i=0;i<n;i++)
{
System.out.println(b[i]);
}
}
}



Enter the number of books
2
*** Enter the book details ***
Enter details of book1
Enter name of book
bms
Enter Author
BMS
Enter Price and Number of pages
2
9
Enter details of book2
Enter name of book
ce
Enter Author
CE
Enter Price and Number of pages
4
10
Book name=bms,Author name=BMS,Price=2.0,Number of pages=9
Book name=ce,Author name=CE,Price=4.0,Number of pages=10
