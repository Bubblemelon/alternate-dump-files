//file name: aodf.c
#include <stdio.h> //defines 3 variable types, several macros and functions for performing i/o
#include <stdlib.h>  // similar to stdio but contains info for memory allocation/freeing

// Main function for the program to run
//
// This program does the same output when doing "od -tx1 filename" except
// the left column is in decimal ( not octal )
//
// in man od :   dump files in octal or indicated format
//              -t : select hexadecimal 2-byte units
//               x1: hexadecimal, size bytes per integer
//
int main( int argc, char *argv[] )
{

    // checks if terminal input has less/more than 2 arguments
    if( argc != 2 )
    {
        printf("Incorrect Usage, please input: ./program filename\n");
        exit(-1); // indicates program unsuccessful
    }

    FILE *f; // FILE object

    f = fopen( argv[1], "r" );
    // "r" == read

    //reading file object i.e. the second agrument in the command line
    //agrv[0] indicates the program itself

    // Check if input file was opened successfully
    if( f == NULL )
    {
        printf("Cannot open %s\n", argv[1] );   // %s == string i.e. name of the file
        exit(-1); // indicates program unsuccessful
    }

    int counter = 0;  //counts the number of hex characters

    int read = getc( f ); // takes reading content from the file variable "f" ( initializes )

   // if( counter % 16 == 0 )
   // {
   //     printf( "\n%08d", counter ); // make sure 8 digits
   // }

    while ( read != EOF )  // Read until End of File
    {
        if( counter == 0  )  // this if else block is used so that the first empty line is not printed because of "\n" e.g. when just stating printf( "\n%08", counter ) instead of block
        {
            printf( "%08d" , counter );
        }
        else if( counter % 16 == 0 )
        {
            printf( "\n%08d" , counter ); //format to print an integer in decimal with a minimum width of 8 characters using 0 to fill the left

        }

        printf( " %02x", read );


        counter++;
        read = getc(f);


    }

    printf("\n%08d\n", counter ); //prints out counter increments


  if( feof(f) )
  {
      printf( "\nEnd of File Reached.\n" ); // prints when EOF reached
  }
  else
  {
      printf( "\nOther Error ?" ); //otherwise some sort of error
  }


  fclose(f);  // CLOSE FILE




  return 0; // indicates program successful
}
