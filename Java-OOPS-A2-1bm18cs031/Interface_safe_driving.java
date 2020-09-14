/* ​Create an interface SAFE_DRIVING with an interface variable Safe_Speed and a member function speed_Of _the_vehicle(). 
Create a class called drive that implements this interface. Display the following messages 1.   
 If vehicle speed greater than Safe_Speed then display ​  ​“Drive slow”  
2.  If vehicle speed is less than Safe_Speed then display ​“Safe Driving”- */





import java.util.*;
interface safe_driving{
    int safe_speed = 60;
    void speed_of_vehicle(int a);
}

class drive implements safe_driving{
    public void speed_of_vehicle(int speed){
        if(speed <= safe_speed){
            System.out.println("Safe driving");
        }
        else{
            System.out.println("Go slow");
        }
    }
    public static void main(String args[]) {
        int speed;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the speed");
        speed = sc.nextInt();
        safe_driving ob = new drive();
        ob.speed_of_vehicle(speed);
    }
}

