#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char* s){
  int length = 0;
  while (*s){
    length++;
    s++;
  }
  return length;
}

char* mystrncpy(char* dest, char* source, int n){
  int i;
  for (i = 0; i < n; i++){
    *(dest + i) = *(source + i);
  }
 return dest;
}

char* mystrcat(char* dest, char* source){
  int len1 = mystrlen(dest);
  int len2 = mystrlen(source);
  int i;
  for (int i = 0; i < len2; i++){
    *(dest + i + len1) = *(source + i);
  }
  dest[len1 + len2] = 0;
  return dest;
}

int mystrcmp(char* s1, char* s2){
  while(*s1 && *s2){
    if(*s1 > *s2)
      return 1;
    if (*s1 < *s2)
      return -1;
    s1++;
    s2++;
  }
  if(!*s1 && !*s2) return 0;
  if(!*s1) return -1;
  return 1;
}

char* mystrchr(char* s, char c){
  while (*s){
    if (c == *s)
      return s;
    s++;
  }
  if (c == *s)
    return s;
  return 0;
}
