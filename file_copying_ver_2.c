#include <stdio.h>
#include <string.h>

main(){
  int c;
  char word[255];
  int i = 0;

  while((c = getchar()) != EOF){
    word[i] = putchar(c);
    i = i + 1;
    printf("\nDid you say? %s\n", word);
  }

  i = 0;
  memset(word, 0, sizeof word);
}
