import java.io.BufferedInputStream;   
import java.math.BigDecimal;   
import java.util.Scanner;   
public class Main {   
public static void main(String[] args) {   
Scanner scan = new Scanner(new BufferedInputStream(System.in));   
while (scan.hasNext()) {   
BigDecimal n = scan.nextBigDecimal();   
int d = scan.nextInt();   
if (d == 0 && n.equals(BigDecimal.ZERO)) {break;}   
System.out.println(n.pow(d));   
}   
}   
}