import java.io.BufferedReader;
import java.io.InputStreamReader;
 
public class Main 
{
   public static void main( String args[] ) throws Exception
   {
      BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) );
   
      int number = Integer.parseInt( br.readLine() );
    
      boolean roundingDown = true;
      int test = number;
   
      if( number < 0 )
      {
         test = -test;
         roundingDown = false;
      }
   
      char[] output = new char[ 35 ];
      int tamanio = 35;
    
      if( number == 0 )
         System.out.println( "0" );
   
      else
      {
         while( test > 0 )
         {
            if( ( test & 1 ) == 0 )
               output[ -- tamanio ] = '0';
            else
               output[ -- tamanio ] = '1';
     
            if( roundingDown )
               test = test >> 1;
            else
               test = ( test + 1 ) >> 1;
     
            roundingDown=!roundingDown;
         }
    
         System.out.println( new String( output, tamanio, 35 - tamanio ) );
      }
   }
}

