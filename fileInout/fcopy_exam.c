#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	FILE* fpSrc;
	FILE* fpDest;

	char caSrcFileName[20];
	char caDestFileName[20];

	//복사할 파일 열기
	printf("복사할 파일명을 입력하세요(최대 20글자) :");
	scanf_s("%s", caSrcFileName, 20);
	fopen_s(&fpSrc, caSrcFileName, "r");
	if (fpSrc == NULL) {
		printf("원본 파일을 찾지 못했습니다. \n");
		return 0;
	}

	//복사될 파일 만들기
	printf("새로 만들 파일명을 입력하세요.(최대 20글자) :");
	scanf_s("%s", caDestFileName, 20);
	fopen_s(&fpDest, caDestFileName, "w");
	if (fpDest == NULL) {
		printf("새로운 파일을 만드는데 실패했습니다. \n");
		return 0;
	}

	{//내용 복사하기
		char temp;
		while ((temp = getc(fpSrc)) != EOF) {
			putc(temp, fpDest);
		}
	}

	//파일 닫기
	fclose(fpSrc);
	fclose(fpDest);
}