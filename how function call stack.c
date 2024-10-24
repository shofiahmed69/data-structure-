#include<stdio.h>
void m3(){
printf("inside m3\n");
}
void m2(){
m3();
printf("inside m2\n");

}
void m1(){
m2();
printf("inside m1\n");
}
int main(){
printf("execution started from the main function\n");
m1();
printf("execution ended\n");
return 0;
}
