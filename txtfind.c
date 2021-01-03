#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30

//returns the length of the line
int get_line(char s[]) {
  int count=0, i=1;
  char k = getc(stdin);
  for (;i < LINE;i++){
    if(k!=EOF && k!='\n' && k!='\r'){
      s[count] = k;
      count++;
      k = getc(stdin);
    }
  }
  if(k==EOF) return -1;
  s[count]='\0';
  return strlen(s);
}
//returns the length of the word
int get_word(char w[]) {
  int count=0, i=1;
  char k = getc(stdin);
  for (;i < WORD;i++){
    if(k!=EOF && k!=' ' && k!='\n' && k!='\t' && k!='\r'){
      w[count] = k;
      count++;
      k = getc(stdin);
    }
  }
  if(k==EOF) return -1;
  w[count]='\0';
  return strlen(w);
}
//checks if one string is contained in the other
int substring(char *str1,char *str2) {
  if (strstr(str1,str2) != NULL) return 1;
  return 0;
}
//checks if there are similar words to the current word
int similar(char *s,char *t,int n){
  int count=0, i=0, j=0;
  if(n==0 && s==t) return 1;
  if(strlen(s) < strlen(t)) return 0;
  for (; i < strlen(s); i++) {
    if(*(s+i) == *(t+j)) j++;
    else count++;
    if(count > n) return 0;
  }
  return 1;
}
//prints all the lines that contained similar words to the current word
void print_lines(char *str){
  char line[LINE];
  while(get_line(line) >= 0)
    if (substring(line,str))
      printf("%s\n", line);
}
// prints all the similar words to the current word
void print_similar_words(char *str){
  char word[WORD];
  while(get_word(word) >= 0)
    if(similar(word,str,1))
      printf("%s\n", word);
}

int main(){
  char word[WORD] = {};
  char k=getc(stdin);
  char operation;
  int count=0;
  if(k!=EOF){
    //read the first word and update 'word'
    while(k!=' '){
        word[count]=k;
        count++;
        k=getc(stdin);
    }
    //read the next char ('a' or 'b')
    operation=getc(stdin);
    switch(operation){
        case 'a':
            print_lines(word);
            break;
        case 'b':
            print_similar_words(word);
            break;
        default:
              printf("No option selected\n");
    }
  }
}
