/*Write a program that demonstrates handling of exceptions in inheritance tree. Create a
base class called “Father” and derived class called “Son” which extends the base
class. In Father class, implement a constructor which takes the age and throws the
exception WrongAge( ) when the input age<0. In Son class, implement a constructor
that cases both father and son’s age and throws an exception if son’s age is >=father’s
age.*/

import java.util.*;
class WrongAge extends Exception{
  private int detail;
  WrongAge(int a) throws WrongAge{
    detail = a;
  }

  public String toString(){
    return "WrongAge[" + detail + "]" ;
  }
}

class father{
  int father_age;
  father(int a)
  {
    father_age = a;
  }
}

class son extends father{
  int son_age;
  son(int a) throws WrongAge{
    super(a);
    if(father_age <= 0)
    {
      throw new WrongAge(father_age );
    }
    else
    {
      Scanner c = new Scanner(System.in);
      System.out.println("Enter son's age");
      son_age = c.nextInt();
      if(father_age > son_age)
      {
        System.out.println("Father's age " + father_age + " is greater than son's age " + son_age);
      }
      else
      {
        throw new WrongAge(son_age);
      }
    }
  }

public static void main(String args[]){
  int age;
  Scanner sc = new Scanner(System.in);
  try
  {
    System.out.println("Enter father's age");
    age = sc.nextInt();
    son s = new son(age);
  }catch(WrongAge e){
    System.out.println(e);
  }
}
}
