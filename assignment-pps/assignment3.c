#include <stdio.h>	
// for implementing #line preprocessor
int main()
{	
	
	printf("Hello world\n"); // this is line 6
	printf("Line: %d\n",__LINE__);	// printing line number, line 7

	#line 23	//reseting to 23, although next line number is line 10. 
	printf("Line: %d\n",__LINE__);	// printing line number
	printf("Line: %d\n",__LINE__);	
	printf("Line: %d\n",__LINE__);

	// let's try with filename (main.c) as well. 
	
	printf( "Line: %d, File: %s\n", __LINE__, __FILE__ );
	// now we use line to reset filename to "new_filename.c"
	// line number is set to 83
	#line 83 "new_filename.c"
	printf( "Line: %d, File: %s\n", __LINE__, __FILE__ );
	
	return 0;
}