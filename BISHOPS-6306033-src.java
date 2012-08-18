import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    
    public static String sub1(String str) {
        int i;
        if(str.charAt(0) == '1') {
            for(i=1; i<str.length(); ++i)
                if(str.charAt(i) != '0')
                    break;
            if(i==str.length()) {
                char[] a = new char[str.length()-1];
                for(i=0; i<a.length; ++i)
                    a[i]='9';
                str = new String(a);
                return str;
            }
        }
        i = str.length()-1;
        if(str.charAt(i) != '0') {
            char[] a = str.toCharArray();
            a[i] -= 1;
            str = new String(a);
        }
        else {
            char[] a = str.toCharArray();
            str = new String(a, 0, str.length()-1);
            str = sub1(str);
            str += "9";
        }
        return str;
    }
    
    public static String dbl(String s) {
        int i, j=0, c=0;
        char[] str = s.toCharArray();
        for(i=s.length()-1; i>=0; --i) {
            j = (int)(str[i]-'0');
            j = (j<<1) + c;
            c = j/10;
            j = j%10;
            str[i] = (char)(j+'0');
        }
        s = new String(str);
        if(c==0)
            return s;
        else
            return (c + s);
    }
    
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        while(true) {
            String num = br.readLine();
            
            if(num==null)
                break;
            else if(num.equals("0") || num.equals("1"))
                System.out.println(num);
            else
                System.out.println(dbl(sub1(num)));
        }
    }
}