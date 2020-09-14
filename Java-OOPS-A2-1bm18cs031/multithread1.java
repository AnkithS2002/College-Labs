/*Write a program which creates two threads, one thread displaying “BMS College of
Engineering” once every ten seconds and another displaying “CSE” once every two
seconds*/

import java.util.*;
class BMSCE implements Runnable{
	Thread t;	
	BMSCE(){
		t = new Thread(this, "t1");
		t.start();
	}
	public void run(){
		while(true){
			System.out.println("BMSCE");
			try{
				Thread.sleep(10000);
			}
			catch(InterruptedException e){
				System.out.println("BMS thread caught");
			}
		}
	}
}
class CSE implements Runnable{
	Thread t;	
	CSE(){
		t = new Thread(this, "t1");
		t.start();
	}
	public void run(){
		while(true){
			System.out.println("CSE");
			try{
				Thread.sleep(2000);
			}
			catch(InterruptedException e){
				System.out.println("CSE thread caught");
			}
		}
	}
}
class multithread{
	public static void main(String args[]){
		BMSCE ob1 = new BMSCE();
		CSE ob2 = new CSE();
	}
}

/*output:
BMSCE
CSE
CSE
CSE
CSE
CSE
BMSCE
CSE
CSE
CSE
CSE
CSE
BMSCE
CSE
*/
