#include <stdio.h>
#include <stdlib.h>
 
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
void sub (void)
{
	    int auto_count = 0;
	    static int static_count = 0;
	    
	    auto_count++;
	    static_count++;
	    
	    printf("auto : %i\n", auto_count);
	    printf("static : %i\n", static_count);


}
       
