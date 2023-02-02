#include <stdio.h>
#include <stdlib.h>
struct Word {
          unsigned char *word;  // word name
          unsigned long offset; // offset of the meaning of the word in the dictionary file
          struct Word *next;    // pointer to next word object
};

#define HASH_SIZE 63 // 26 letters in upper case + 26 letters in lower case + 10 number letters + Other lettes.
struct Word* hashdict[HASH_SIZE];

struct Word* create_word (const char *w, unsigned long off){
  

}

void readFile(){
  FILE *f;
  char s1[200]; 
  f = fopen("dictionary.txt", "r");
  if(f == NULL){
        printf("Error opening file\n");
        exit(1);
  }
  fseek(f, 7, SEEK_SET);                
  fgets(s1, 1000, f);
  printf("%s", s1);
  fclose(f);  
}
int main(){
  readFile();

}
