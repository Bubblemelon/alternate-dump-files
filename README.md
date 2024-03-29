# alternate-dump-files

## Description:
This program displays the content of a file to stdout that is similar to doing: the following below. The difference is that the offset is in decimal and not in octal for the last two of the mentioned processes. This program does the same as doing "hd filename". 

```
$ hd filename

$ od -tx1 filename 

$ hexdump filename
// hexdump displays/orders bytes depending on the endianess of your machine
``` 
The code in this repository called ["detect_endianess"](https://github.com/Bubblemelon/detect_endianess "Bubblemelon's Detect Endianess") can determine the endianess of your computer. 

The file titled "printcap" is generated automatically by printer configurations in "/etc". A description of this file can be found in the file "printcap". I used this file as a sample to run my program. 

### Program usage:

(1) fopen/fclose
(2) End of File: EOF and feof
(3) Command-line arguments of index 0 and 1 



### For example:

When doing ```od -tx1 printcap```

The left most column is in octal:
```
0000000 23 20 54 68 69 73 20 66 69 6c 65 20 77 61 73 20
0000020 61 75 74 6f 6d 61 74 69 63 61 6c 6c 79 20 67 65
0000040 6e 65 72 61 74 65 64 20 62 79 20 63 75 70 73 64
```

When doing ``` $ ./aodf printcap ``` 

The left most column is in decimal:
```
00000000 23 20 54 68 69 73 20 66 69 6c 65 20 77 61 73 20
00000016 61 75 74 6f 6d 61 74 69 63 61 6c 6c 79 20 67 65
00000032 6e 65 72 61 74 65 64 20 62 79 20 63 75 70 73 64
```


## Note:

Look at aodf.c for comments on usage. 

I saved the output of  ``` $ ./aodf printcap ``` in a file called output.txt 

testfile1.c is created to produce a program called " ./testfile1 " ; the output of this program is saved under the filed called " test ". The purpose of this file is to see whehter if aodf.c is correct.   


 
