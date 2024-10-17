
#include<stdio.h>

int to_bin(int n); 
int main(void) {
}
int number;
printf("10진수 정수 입력: ");
scanf("%d", &number); 
to_bin(number); 
return 0;
int to_bin(int n) { 
if (n == 0 || n == 1) 
else {
}
to_bin(n / 2); 
return 0;
}