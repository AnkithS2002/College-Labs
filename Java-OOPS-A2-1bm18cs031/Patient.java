//Develop a java program to create a class Patients with data members patient_id, patient_name, Patient_age, doc.The program should include following functionalities:accept n patient details,accept patient id and display his/her details accept the name of doctor and display the name of all the patients related to him/her


import java.util.*;
class Patient
{
    int pat_id, age;
    String name;
    String doc;
    void input()
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the details of patients");
        System.out.println("enter name");
        name=sc.next();
        System.out.println("enter age");
        age=sc.nextInt();
        System.out.println("enter pat_id");
        pat_id=sc.nextInt();
        System.out.println("enter doctor");
        doc=sc.next();
    }
    void Display()
    {
        System.out.println("details of the patients are" +name  +age  +pat_id  +doc);
    }
}
class DemoPatient
{
    public static void main(String args[])
    {
        int n,i;
        System.out.println("enter number of patients");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        Patient[] s=new Patient[n];

        for(i=0;i<n;i++)
        {
             s[i]=new Patient();
             s[i].input();
             s[i].Display();
         }
      }
 }


