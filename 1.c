#include <stdio.h>
#include <string.h>

FILE *data;

void uniq() {

}

int main(int argc, char* argv[]) {

	char* c;

	if(argc<2) {
		printf("You don't choose a file.\n");
		return 0;
	}

	data = fopen(argv[2], "r");
	while (fscanf(data, "%c", c) != EOF) {
		printf("%c", c);
	} 


	printf("Hello, world!\n");
}