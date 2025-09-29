/*
* Bitwise Operator
*/

#include<stdio.h>

// NOTE: IGNORE THE BELLOW FUNCTION IT IS A SIMPLE DECIMAL TO BINARY CONVERTER AND BEYOUND THIS TOPIC
int B2D(int n) 
{
    int remainder,result = 0,multiplier = 1;
    while(n){
        remainder = n%2;
        result = remainder*multiplier + result;
        multiplier*=10;
        n/=2;
    }
    return result;
}
// NOTE: IGNORE THE ABOVE FUNCTION IT IS A SIMPLE DECIMAL TO BINARY CONVERTER AND BEYOUND THIS TOPIC


int main() 
{
  // NOTE: A bitwise operation is performed in every bit of a number for example if we take 10 and 10 and perform bitwise and on theme
  // here is what happens
  // * 
  // 10 = 1 0 1 0
  // 10 = 1 0 1 0 &
  // ---------------
  // 10 = 1 0 1 0


  // NOTE: There are 5 Bitwise Operators
  // 1. & (Bitwise AND)
  // 2. | (Bitwise OR)
  // 3. ^ (Bitwise XOR / Bitwise Exclusive OR)
  // 4. >> (Bitwise Shift left)
  // 5. << (Bitwise Shift right)
  
  // initial Setup
  int a;
  int b;

  int r;

  // ----------Bitwise AND----------------
  // NOTE: a Bitwise AND will take the binary value of a number and perform the AND operation on every coresponding bit   
  
  a = 10; b = 10;
  r = a & b;

  printf("Example of & {Bitwise AND} [a & b]\n");
  printf("(value1: %d binary: %d), (value2: %d binary: %d) (result: %d binary: %d) \n\n", a, B2D(a), b, B2D(b), r, B2D(r));
  
  // ----------Bitwise OR---------------
  // NOTE: a Bitwise OR will take the binary value of a number and perform the OR operation on every coresponding bit   
   
  a = 10; b = 10;
  r = a | b;
  printf("Example of & {Bitwise OR} [a | b]\n");
  printf("(value1: %d binary: %d), (value2: %d binary: %d) (result: %d binary: %d) \n\n", a, B2D(a), b, B2D(b), r, B2D(r));
  
  // ----------Bitwise XOR----------------
  // NOTE: a Bitwise XOR will take the binary value of a number and perform the XOR operation on every bit   
  
  a = 10; b = 5;
  r = a ^ b;
  printf("Example of & {Bitwise XOR} [a ^ b]\n");
  printf("(value1: %d binary: %d), (value2: %d binary: %d) (result: %d binary: %d) \n\n", a, B2D(a), b, B2D(b), r, B2D(r));
 
  // ----------Bitwise Left Shift----------------
  // NOTE: a Bitwise Left Shift will take the binary value of a number and Move all the bit to the left by the amount provided 
  
  a = 20;
  r = a >> 2; //Here the variable a will be shift by 2 bits [eg. 10100 will be 101]
  printf("Example of & {Bitwise left shift} [a >> b]\n");
  printf("(value1: %d binary: %d), (value2: %d binary: %d) (result: %d binary: %d) \n\n", a, B2D(a), b, B2D(b), r, B2D(r));
  
  // ----------Bitwise Right Shift----------------
  // NOTE: a Bitwise AND will take the binary value of a number and move all the bit to the right by the amount provided   
  
  a = 20;
  r = a << 3; //Here the variable a will be shift by 3 bits [eg. 10100 will be 10100000]
  printf("Example of & {Bitwise right shift} [a << b]\n");
  printf("(value1: %d binary: %d), (value2: %d binary: %d) (result: %d binary: %d) \n\n", a, B2D(a), b, B2D(b), r, B2D(r));
  



}
