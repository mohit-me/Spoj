import java.util.*;
 
public class Main {
  public static int f(int a, int b) {
 
    if(b==0)return 1;
 
    //find last digit of a
    int da = a % 10;
 
    if(da==0)return 0;
    if(da==5)return 5;
    switch(b%4){
    case 0:
      return da%2!=0?1:6;
    case 1:
      return da;
    case 2:
      return da*da%10;
    default:
      return da*da*da%10;
    }
  }
  public static void main(String[] a) {
    Scanner c = new Scanner(System.in);
    c.nextLine();
    while(c.hasNext())
      System.out.println(f(c.nextInt(),c.nextInt()));
  }
}