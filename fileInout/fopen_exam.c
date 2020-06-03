#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void display(FILE* fp); //ȭ�鿡 ����ϴ� �Լ�

int main()
{
	char fname[20], cExit;
	FILE* fp;

	do {
		printf("input file name : ");
		gets_s(fname, 20);
		fopen_s(&fp, fname, "r");

		if (fp == NULL) {
			fprintf(stderr, "cannot open this file : %s \n", fname);
		}
		else {
			display(fp);
		}

		printf("\n\n Any key... or 'q' to exit...");

		cExit = getchar();
	} while (cExit != 'q');

}

void display(FILE* fp)
{
	char c;

	while ((c = getc(fp)) != EOF) {
		putc(c, stdout);
	}
}