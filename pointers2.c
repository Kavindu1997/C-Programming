#include<stdio.h>
int main(){
	int x=5;
	int y;
	int *p=NULL;
	p=&x;
	
    y = *p+2;
    y += *p;
    *p=y;
    (*p)++;
	printf("p is pointing to a value %d\n",*p); 	
}
