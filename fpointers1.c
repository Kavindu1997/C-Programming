#include<stdio.h>
void say_hello(int num_times);

int main(){
	void (*funptr)(int);
	funptr=say_hello;
	funptr(3);
	
}

void say_hello(int num_times){
	int k;
	for(k=0;k<num_times;k++)
	    printf("hello %d\n",k+1);
}
