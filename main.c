#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	FILE* fp = fopen("wordlist.txt", "w+");
	for(int i = 0; i < 100000000; i++) {
		fprintf(fp, "%08d\n", i);	
	}
	fclose(fp);
	return 0;

}
