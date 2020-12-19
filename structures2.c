#include<stdio.h>

typedef struct{
	int x;
	int y;
	
}point;

typedef struct{
	float r;
	point c;
}circle;

int main(){
	circle c={4.5,{1,3}};
	printf("%3.1f (%d,%d)",c.r,c.c.x,c.c.y);
	
	
}
