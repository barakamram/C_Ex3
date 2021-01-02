#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30

int get_line(char s[]){
  if(s==NULL) return -1;
  int count = 0;
  for (int i = 0; i < LINE; i++) {
    if(s[i]=='\n')
      return count;
    count++;
  }
  return count;
}

int get_word(char w[]){
  if(w==NULL) return -1;
  int count = 0;
  for (int i = 0; i < WORD; i++) {
    if(w[i]=='\n' || w[i]=='\t' || w[i]==' ')
      return count;
    count++;
  }
  return count;
}

int substring(char *str1,char *str2){
  if (strlen(str1) < strlen(str2))
    return 0;
  for (int i = 0; i < strlen(str1); i++){
    int j = 0;
    for (j=0; j < strlen(str2); j++){
      if (str1[i]==str2[j]){
        i++;
        if(j==strlen(str2)-1)
          return 1;
      }
      else break;
    }
  }
  return 0;
}

int similar(char *s,char *t,int n){
  int count = 0;
  int i = 0;
  int j = 0;
  if(n==0 && s==t)
    return 1;
  for (i = 0; i < strlen(s);) {
    for (j = 0; j < strlen(t);) {
      if(s[i]==t[j]) {
        i++;
        j++;
      }
      else {
        i++;
        count++;
      }
    }
    if(count > n)
      return 0;
    else if (j==strlen(t)-1 && count==n)
      return 1;
  }
  return 0;
}

void print_lines(char *str){
  char line[LINE];
  while(get_line(line)!=-1){
    if(substring(line,str))
      printf("%s", line);
  }
}

void print_similar_words(char *str){
  char word[WORD];
  while(get_word(word)!=-1){
    if(similar(word,str,1))
      printf("%s\n", word);
  }
}

int main(){
  //FILE *find_input;
  //find_input = fopen("/hw3_self_tests/find_input.txt", "w+");
  char line[LINE];
  char word[WORD];
  fgets(line,LINE,stdin);
  int i = 0;
  int k = 0;
  for (i = 0; i < LINE; i++) {
    if(line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
      word[k] = '\0';
      break;
    }
    else {
      word[k]=line[i];
      k++;
    }
  }
  i++;
  if (line[i] == 'a')
    print_lines(word);
  if (line[i] == 'b')
    print_similar_words(word);

}
