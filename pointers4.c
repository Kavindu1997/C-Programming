#include<stdio.h>
void swap(int*,int*);

int main(){
	int x=25;
	int y=100;
	
	printf("x is %d,y is %d\n",x,y);
	swap(&x,&y);
	printf("x is %d,y is %d\n",x,y);
}

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
