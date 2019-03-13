#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ){
	if( argc != 4 ) { // If arguments count not corrent show error and exit
    printf( "\nMissing file name or size of matrix\n" );
    printf( "The proper format is: a.out row column filename\n\n" );
  }	 else {	
  	int row = atoi(argv[1]); 
  	int column = atoi(argv[2]); 
  	FILE *fp = fopen( argv[3], "w" );
  	int i, j;
  	fprintf(fp, "%d %d\n",row,column );
	
		for( i = 0; i < row; i++ ) {
    	for( j = 0; j < column; j++ ) {
      	fprintf(fp, "%d ",rand() % 10 -5 );
    	}
    	fprintf(fp,"\n");
  	}
		fclose (fp);
	}
	return(0);
}
