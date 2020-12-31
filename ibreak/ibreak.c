#include<stdio.h>
#include<string.h>

int breakatthirteen(char *str){
	char buffer[13];
	strcpy(buffer,str);
/*
	if (strcpy(buffer,str)) {
		printf("\n String didn't overflow the buffer\n");
	}
	else{
		printf("\n String overflow. This will never show up");
	}
*/
}

int main(int argc, char *argv[]){
	if (argc != 2 ){
		printf("\n Wrong usage\n");
		return(255);
	}

	printf("Copying \"%s\" to the buffer...\n", (void*)argv[1]);
	breakatthirteen(argv[1]);
	printf("Did you get a 'segmentation fault' below ?\n");
	return(0);
}
