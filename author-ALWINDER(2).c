#include<stdio.h>
int main(){
 char *ptr = "void pointer";
 int *vptr;
 vptr = &ptr;
 printf("%s" , **&vptr);
 return 0;
}

