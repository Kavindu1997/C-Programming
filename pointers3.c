#include<stdio.h>
int main(){
     int a[5]={22,33,44,55,66};
     printf("%d\n",*a);
	 int *ptr=NULL;
	 int i;
	 ptr=a;  //ptr=&a[0];
	 
	 for(i=0;i<5;i++){
	 	printf("%d\t",*(ptr+i));
	 }
	 	
}
