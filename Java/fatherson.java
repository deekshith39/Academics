import java.util.*;

class wrongage extends Exception{

public String toString()
{
return("wrong age");
}
}

class sonage extends Exception{

public String toString()
{
return("sonage is not correct");
}
}

class father{
public int age;
father()
{
Scanner s=new Scanner(System.in);
System.out.println("enter the age =");
age=s.nextInt();
}
void exp1() throws wrongage{
if (age<0)
throw new wrongage();
}
}

class son extends father
{
public int sage;
son()
{
Scanner s=new Scanner(System.in);
System.out.println("enter the age =");
sage=s.nextInt();}
void exp2() throws sonage{
if(sage>=age)
throw new sonage();
}
}

class fatherson{
public static void main(String args[])
{
son s=new son();
try{
s.exp1();
}
catch(wrongage e){
System.out.println(e);
}
try{
s.exp2();
}
catch(sonage e){
System.out.println(e);
}
}
}