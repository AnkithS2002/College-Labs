//Implement a class called PERSON having data members as name, age and address. Derive a class STUDENT 
// from PERSON having data members rollno, and sem. Derive another class EXAM from STUDENT which has data members marks1, marks2
// and computes the average and displays the topper of the class. Use suitable methods to accept and display data in these classes.


class Person
{
    string name;
    int age;
    String address;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter name, age, address\n");
        name=sc.next();
        age= sc.nextint();
        address=sc.next();
     }
     void Display()
     {
        System.out.println("topper of the class", +topper);
     }
 }
 class Students extends Person
 {
     Scanner sc=new Scanner(System.in);
     int roll_no, sem;
     System.out.println("enter rollno and semester");
     roll_no=sc.nextInt();
     sem=sc.nextInt();
 }
 class Exam extends Student
 {
     int m1,m2,avg;
     System.out.println("Enter marks of subject1 and subject2");
     m1=sc.nextInt();
     m2=sc.nextInt();
     avg=(m1+m2)/2;
 }
 
 class DemoPerson
 {
     public static void main(String args[])
     {
         int n;
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter number of Students");
         n=sc.nextInt();
         Students[] s=new Students[n];
         for(i=0;i<n;i++)
         s[i]=new Students();
    }
 }
 
 
