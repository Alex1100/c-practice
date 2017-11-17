#include <stdio.h>
#define MAXLINE 1000

int gettheline(char line[], int maxline);
void copy(char to[], char from[]);
int size(char *ptr);

int main(void){
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while((len = gettheline(line, MAXLINE)) > 0){
    if(len > max){
      max = len;
      copy(longest, line);
    }
  }

  if(max > 0){
    printf("\nLINE IS: %s\bLENGTH IS: %d\n", longest, size(&longest[0]) - 1);
    return 0;
  }
}

int size(char *ptr){
  //variable used to access the subsequent array elements.
  int offset = 0;
  //variable that counts the number of elements in your array
  int count = 0;

  //While loop that tests whether the end of the array has been reached
  while (*(ptr + offset) != '\0'){
    //increment the count variable
    ++count;
    //advance to the next element of the array
    ++offset;
  }
  //return the size of the array
  return count;
}


int gettheline(char s[], int lim){
  int c, i;

  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
    s[i] = c;
  }

  if(c == '\n'){
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}


void copy(char to[], char from[]){
  int i;

  i = 0;

  while((to[i] = from[i]) != '0'){
    ++i;
  }
}
