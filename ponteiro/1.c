#include <stdio.h>
main () {
   int x, y, *P1, *P2;
   x = 13;		
   P1 = &x;		
   y = *P1 + 4;	
   printf ("%d, %d, %d\n", x, *P1, y);  
   P2 = &x;	
   *P2 = 28;	
   printf ("%d, %d, %d\n", x, *P1, y);   
   }
