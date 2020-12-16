#include<stdio.h>
void fun(int *p) 
{ 
  int q = 10; 
  *p = &*&q; 
}       
int main() 
{ 
  int r = 20; 
  int *p = &r; //p points to r
  fun(p); 
  printf("%d", *&*&*p); //p now points to address of q
  return 0; 
}
