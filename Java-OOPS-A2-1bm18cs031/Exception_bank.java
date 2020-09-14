/*Implement user defined exception in a java program for Bank application which has a class with instance variables acno, name, 
balance and methods like deposit(amt) and withdraw(amt). 
If the balance falls below 2000/- then it should throw user defined exception “insufficient balance”. */



 import java.util.*;
 class Insufficient extends Exception{
     double detail;
     Insufficient(double a){
        detail = a;
     }
     public String toString(){
         return ("Insufficient Balance " + detail);
     }
 }

 class bank{
    String acno , name;
     double balance , amount;
     void getDetials(){
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter name : ");
         name = sc.next();
         System.out.println("Enter acno : ");
         acno = sc.next();
         System.out.println("Enter Balance amount : ");
         balance = sc.nextDouble();
     }
         void deposit() throws Insufficient{
         if(balance < 2000){
             throw new Insufficient(balance);
         }
         else{
             Scanner sc = new Scanner(System.in);
             System.out.println("Enter amount to be deposited");
             amount = sc.nextDouble();
             balance += amount;
             System.out.println("Balance updated :" + balance);
         }
     }
     void withdraw() throws Insufficient{
        if(balance < 2000){
            throw new Insufficient(balance);
        }
        else{
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter amount to be withdrawn");
            amount = sc.nextDouble();
            if((balance - amount) < 2000)
            {
                throw new Insufficient(balance);
            }
            else{
                balance -= amount;
            System.out.println("Balance updated :" + balance);
            }
        }
    }
    void display(){
        System.out.println("----------------Account Holder Details----------------");
        System.out.println("Name of Account holder " + name);
        System.out.println("Account Number : " + acno);
        System.out.println("Balance Amount : " + balance);
    }

     public static void main(String[] args) {
        try{
            bank ob = new bank();
            int ch = 0;
            ob.getDetials();
            while(ch != 3){
                System.out.println("Enter your choice 1.Deposit 2.Withdraw 3.Exit");
                Scanner sc = new Scanner(System.in);
                ch = sc.nextInt();
                switch(ch){
                    case 1: ob.deposit();
                            break;
                    case 2: ob.withdraw();
                            break;
                }
            }
            ob.display();
        }catch(Insufficient e){
            System.out.println(e);
        }
    }
}
