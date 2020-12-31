#include<stdio.h>
#include<string.h>

int breakatthirteen(char *str){
	char buffer[13]; // This buffer is 13 bytes long
	strcpy(buffer,str); // Breaks if input is larger than the buffer size
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
