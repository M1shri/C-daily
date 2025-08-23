#include <stdio.h>
void and(int a , int b);
void or(int a , int b);
void xor(int a , int b);
void not(int a , int b);

int main() 
{
    int a = 5;  
    int b = 3;   

 and(a, b); // Bitwise and

  or(a, b);  // Bitwise OR

  xor(a, b);  // Bitwise XOR
    
  not(a, b); // Bitwise NOT
}

void and(int a, int b)
  { // Bitwise and
    printf("a & b  = %d\n", a & b);
  }

void or(int a,int b)  // Bitwise OR
    {
      printf("a | b  = %d\n", a | b);
    }

 void xor(int a,int b)  // Bitwise XOR
    { 
      printf("a ^ b  = %d\n", a ^ b);
    }

void not(int a, int b) 
  { // Bitwise NOT
    printf("~a     = %d\n", ~a);
    printf("~b     = %d\n", ~b);
  }