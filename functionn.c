#include<stdio.h>
 int sum(int, int);

 //function definition
 int sum (int x, int y){
    printf("the sum is %d\n", x+y);
    return x+y;
 }
int main(){
    int a= 1;
    int b= 2;
    sum(a,b);

int a1= 12;
int b1= 23;
sum(a1,b1);
    int a2= 123;
    int b2= 234;    
    sum(a2,b2);
    return 0;
}