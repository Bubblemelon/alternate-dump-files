# alternate-dump-files

## Description:
This program displays the content of a file to stdout that is similar to doing ```od -tx1 filename``` on the terminal. The difference is that the offset is in decimal and not in octal. 

The file titled "printcap" is generated automatically by printer configurations in "/etc". A description of this file can be found in the file "printcap".

Program usage:

(1) fopen/fclose
(2) End of File: EOF and feof
(3) Command-line arguments of index 0 and 1 

## Note:

Look at aodf.c for comments on usage. 

output.txt displays the output of  ``` $ ./aodf printcap ``` 
