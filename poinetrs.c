#include <stdio.h>
void main() {

int n=25;
int *k;

k=&n;
*k=30;

printf("n = %d\n",n);
printf("n = %d\n",*k);
printf("address n = %x\n",k);
}

