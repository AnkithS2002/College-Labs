import java.util.*;
class EndSort
{
    String s;
    int N, arr[], counter;
    
    void input()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        N = sc.nextInt();
        arr = new int[N+N];
        System.out.println("Enter the numbers separated by a space");
        s = sc.next();
        
    }
    
    void output()
    {
        System.out.println(counter);
    }
    //to convert string to array of numbers
    void convert()
    {
        int i = 0;
        char ele = '0';
        while(ele != '\0')
        {
            ele = s.charAt(i);
            if(ele != ' ')
            {
                arr[i] = ele;
                
            }
            i++;
        }
            
    }
    
    void sort()
    {
        for(int i=0; i<N; i++)
        {
            if(arr[i] > arr[i+1])
            {
                arr[N] = arr[i];
                counter++;
            }
        }
    } 
}

class Main
{
    public static void main (String[] args) 
    {
         EndSort e = new EndSort();
         e.input();
         e.convert();
         e.sort();
         e.output();
     }
}
        
        
        
    

