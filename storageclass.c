#include <stdio.h>
int x = 21; // external storage class
void main(){
	auto int i=1;	// automatic storage class
	{
		{
			{
				printf("i in the 1st func = %d\n",i);
			}

			printf("i in the 2nd func = %d\n",i);
		}

	printf("i in the 3rd func = %d\n",i);
	}
////////////////////////////////////////////////// register storage class
register int j;

for (j=1;j<=10;j+=1)
	printf("j is %d\n",j);

////////////////////////////////////////////////// static storage class

increment();
increment();
increment();

////////////////////////////////////////////////// external storage class

extern int y; // external declaration
printf("x is = %d, y is = %d\n",x,y);


//////////////////////////////////////////////////
} // end of main

int y= 31;   // external definition

increment(){
	static int k=1;
	printf("%d\n",k);
	k++;
}




