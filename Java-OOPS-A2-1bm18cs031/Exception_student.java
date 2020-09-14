/*Create a class Student which includes instance variables usn, name and marks of three subjects. Accept the input through command line arguments. 
 Raise an user defined exception ‘noargs’ if no arguments are given in command line . Also raise an exception when negative marks are given.*/
import java.util.*;
class noargs extends Exception{
    String detail;

    noargs(String detail){
        this.detail = detail;
    }

    public String toString(){
        return detail;
    }
}

class negative extends Exception{
    String x;
    negative(String x){
        this.x = x;
    }
    public String toString(){
        return x;
    }
}

class student{
    String name , usn , marks1 , marks2 , marks3;
    public static void main(String[] args) {
        try
        {
            if(args.length == 0){
                throw new noargs("No arguments passed");
            }
            else if((Integer.parseInt(args[2])) < 0 || (Integer.parseInt(args[3])) < 0 || Integer.parseInt(args[4]) < 0){
                throw new negative("Marks cannot be negative");
            }
            else{
                for(int i = 0 ; i < args.length ; i++){
                    System.out.println(args[i]);
                }
            }
        }catch(noargs e){
            System.out.println(e);
        }
        catch(negative e){
        System.out.println(e);
        }
    }
}
