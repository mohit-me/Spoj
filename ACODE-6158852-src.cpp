#include <iostream>
#include <string>
using namespace std;
int main()
{
string serialNumber;   
int preSolution;	   
int currentSolution;	
int nextSolution;	    
int newNumber;	        
int len;	            
int i;	                
while( cin >> serialNumber )
{
if( serialNumber == "0" )
break;
len = serialNumber.length();
preSolution = 1;
currentSolution = 1;

if( len > 1 )
{
newNumber = ( serialNumber[0] - '0' ) * 10 + ( serialNumber[1] - '0' );

if( 11 <= newNumber && newNumber <= 19 ||
21 <= newNumber && newNumber <= 26 )
currentSolution = 2;
}

for( i = 2; i < len; ++i )
{
nextSolution = currentSolution;
newNumber = ( serialNumber[i-1] - '0' ) * 10 + ( serialNumber[i] - '0' );

if( 11 <= newNumber && newNumber <= 19 ||
21 <= newNumber && newNumber <= 26 )
nextSolution += preSolution;
else if( newNumber == 10 || newNumber == 20 )
nextSolution = preSolution;
preSolution = currentSolution;
currentSolution = nextSolution;
}
cout << currentSolution << endl;
}

return 0;
}
