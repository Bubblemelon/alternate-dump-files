// This .c file is to test aodf.c 

// I used this to generate a program called ./testfile1

// the ouput of ./testfile1 is saved under "test"

// which I used to test the program, like this: ./aodf test 

#include <stdio.h>

int main(void){

    putchar(0x01);
    putchar(0xEF);
    putchar(0xCF);

    return 0;
}
