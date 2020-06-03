#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp;
	char buff[256];

	//문장 입력받아 파일에 저장하기.
	fopen_s(&fp, "test.txt", "w");
	printf("원하는 문장을 입력하세요. \n");
	scanf_s("%s", buff, 256);
	fprintf(fp, "%256s", buff);
	fclose(fp);

	//파일에서 문장 입력받아서 화면에 출력하기.
	fopen_s(&fp, "test.txt", "r");
	printf("입력하신 문장은\n");
	fscanf_s(fp, "%256s", buff, 256);
	printf("%s\n", buff);
	printf("입니다.\n");
	fclose(fp);
}