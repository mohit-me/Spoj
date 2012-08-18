class Main 
{
   public static void main( String args[] ) throws Exception
   {  
      int ultimoDigito = System.in.read();
      int car = System.in.read();
      while( car != 10 && car != -1 )
      {
         ultimoDigito = car;
         car = System.in.read();
      }
          
      // Recordar que el 48 es el codigo ASCCI del 0
      if( ultimoDigito == 48 )
         System.out.println( 2 );
      else
      {
         System.out.println( 1 );
         System.out.println( ultimoDigito - 48 );
      }
   }
}