// 2 program to count the number of characters and number of lines in a file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    int ch, no_of_characters = 0, no_of_lines = 1;
    char filename[20];
    printf("\n Enter the filename: "); // enter:  file1_ex.txt
    gets(filename);
    fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("\n Error opening the file.");
        exit(1);
    }
    ch = fgetc(fp);
    while(ch != EOF)
    {
        if(ch == '\n')
            no_of_lines++;
        no_of_characters++;
        ch = fgetc(fp);
    }
    if(no_of_characters > 0)
    printf("\n In the file %s, there are %d lines and %d characters",filename,no_of_lines,no_of_characters);
    else
    printf("\n File empty");
    fclose(fp);
}
