#include <stdio.h>
#include <conio.h>

int main()
{
	FILE* fp;

	fopen_s(&fp, "test.txt", "w");

	printf("Ctrl+c to save \n");
	printf("input codes : \n");
	char c = 0;

	while ((c = getc(stdin)) != EOF) {
		putc(c, fp);
	}

	printf("Save in test.txt");

	fclose(fp);
}