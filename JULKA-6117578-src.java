import java.math.*;
import java.io.*;
import java.util.*;
class main 
{
  public static void main(String[] args) throws IOException 
  {
   
	  
   int n=10;
   Scanner cin = new Scanner(System.in);
   BigInteger total,cc,ans1,ans2;
   while(n-->0)
   {
	   total = cin.nextBigInteger();
	   cc = cin.nextBigInteger();    
	   ans1 = total.subtract(cc);
	   ans1 = ans1.divide(BigInteger.valueOf(2));
	   ans2 = ans1;
	   ans1 = ans1.add(cc);
	   System.out.println(ans1);
	   System.out.println(ans2);
   }
  }
}
