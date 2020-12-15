#include<stdio.h>
#include<string.h>

int main(){
	char first_name[25];
	char full_name[50];
	int age;
	
	printf("Enter your first name and age:\n");
	scanf("%s %d",first_name,&age);
	
	printf("Enter your full name: ");
	fgets(full_name,50,stdin);   //gets(full_name);
	
}
