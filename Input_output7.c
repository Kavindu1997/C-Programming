#include<stdio.h>
int main(){
	int x,y;
	char text[20];
	scanf("%2d %d %*f %5s",&x,&y,text);
	printf("%d %d %s",x,y,text);
    
}
