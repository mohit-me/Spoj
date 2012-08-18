import java.io.*;
 
public class Main
{
    public static void main( String[] args ) throws Exception
    {
        BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) );
        int tamanio=0, longitud;
        char[] salida = new char[ 500000  ];String cadena;
   
   
        int numCasos = Integer.parseInt( br.readLine() );
   
        long N;
        for( int i = 0; i < numCasos; i ++ )
        {
            N = Long.parseLong( br.readLine() );
    
            cadena= invertir( N ) ;
    
            longitud = cadena.length();
            cadena.getChars( 0, longitud, salida, tamanio );
            tamanio = tamanio + longitud;
            salida[ tamanio ++ ] = '\n';
        }
   
        System.out.print( new String( salida, 0, tamanio ) );
    }
  
    public static String invertir( long N )
    {
        if( (N&1)==0)
            return ( N >> 1 ) * ( N + 1 )/3 + "";
        else
            return ( ( N + 1 ) >> 1 ) * N/3 + "";
    }
}

