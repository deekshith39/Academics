import java.util.*;
import java.io.*;
class bms extends Thread
{
public void run()
{
try
 {
 for(int i=5;i>0;i--)
 {
 System.out.println("BMSCE");
 Thread.sleep(10000);
 }
 }
catch(InterruptedException e)
{
System.out.println("interupted");
}
System.out.println("exiting bms");
}
}
class cse extends Thread
{
public void run()
{
  try
  {
   for(int i=5;i>0;i--)
   { System.out.println("CSE");
     Thread.sleep(2000);
    }
}
  catch(InterruptedException e)
  {System.out.println("interrupted");}
   System.out.println("exiting cse");
}
}

class mythread
{
public static void main(String args[])
{
bms t1=new bms();
cse t2=new cse();
t1.start();
t2.start();
}
}
    