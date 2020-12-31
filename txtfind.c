#include "txtfind.h"
#include <studio.h>
#include <string.h>
#include <ctype.h>
#define LINE 256
#define WORD 30

int getLine(char s[]){
    size_t i = 0;
    char c = getc(stdin);
    if(c==EOF) return -1;
    while(c!=EOF && (c!='\n'||c!='\t') && i < (LINE-1)){
        s[i] = c;
        ++i;
        c = getc(stdin);
        }
    s[i]='\0';
    return strlen(s);
    }

int getWord(char w[]){
    }

int substring(char* str1, char* str2){
     if(strstr(str1, str2) != NULL) return 1;
     return 0;
    }
