#include<stdio.h>
void* square(const void* num);

int main(){
     int x,sq_int;
     x=6;
     sq_int=square(&x);
     printf("%d squared is %d",x,sq_int);
     
	
}

void* square(const void* num){
	int result;
    result=(*(int*)num)*(*(int*)num);
    return result;
}
