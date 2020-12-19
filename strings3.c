#include<stdio.h>

int main(){
    char *trip[]={"suitcase","passport","ticket"};
    int i;
    printf("please bring the following:\n");
    for(i=0;i<3;i++){
    	printf("%s\n",trip[i]);
	}
}
