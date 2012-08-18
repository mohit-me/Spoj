import java.util.Scanner;
public class Main{
    public static void main(String args[]) throws Exception {
        int a[]=new int[500001];
        a[0]=0;
        boolean flag[] =new boolean[3012501];
        Scanner sc=new Scanner(System.in);
        int n=0;
       for(int i=1;i<=500000;i++){
        if(a[i-1]-i>0&&flag[a[i-1]-i]==false){
             a[i] = a[i-1]-i;
             flag[a[i-1]-i] = true;
         }else{
             a[i] = a[i-1]+i;
             flag[a[i-1]+i] = true;
          }
     }
          
      while((n=sc.nextInt())!=-1){
         System.out.println(a[n]);
         
      }
 }
}
