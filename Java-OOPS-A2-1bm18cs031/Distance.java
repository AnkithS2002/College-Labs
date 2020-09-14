/*Write a java program to find the distance between two points. Include zero argument constructor,
parameterised constructor, copy constructor to initialise different objects. */

import java.util.*;
class Point
{
	int x,y;
	Point()
	{
		x=0;
		y=0;
	}
	Point(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	Point(Point ob)
	{
		x=ob.x;
		y=ob.y;
	}
	double Distance(Point p)
	{
		return (Math.sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)));
	}
}
class Main
{
	public static void main(String args[])
    {

	System.out.println("Enter the coordinates of point 1");
	Scanner se=new Scanner(System.in);
	int x1=se.nextInt();
	int y1=se.nextInt();
	System.out.println("Enter the coordinates of point 2");
	int x2=se.nextInt();
	int y2=se.nextInt();
	Point p1=new Point(x1,y1);
	Point p1a=new Point(p1);
	Point p2=new Point(x2,y2);
	double distance=p1.Distance(p2);
	System.out.println("Distance between p1 and p2 is :  " +distance);
    }
}
