#include<stdio.h>
int square(int);

int main(){
	int x,res;
	x=5;
	res=square(x);
	printf("%d squared is %d\n",x,res);
	return 0;
	
}

int square(int num){
	int y;
	y=num*num;
	return y;
}
