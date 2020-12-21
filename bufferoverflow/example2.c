#include<stdio.h>
#include<string.h>

void func(char *str){
	char buffer[16];
	strcpy(buffer,str);
	printf("Function func() called successfully.");
}

void main(){
	char large_string[256];
	int i;

	for(i=0; i<15; i++){
		large_string[i] = 'A';
	}

	func(large_string);
}
