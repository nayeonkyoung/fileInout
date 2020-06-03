#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp;
	char buff[256];

	//파일에 문자열 입력받기.
	fopen_s(&fp, "new file.txt", "w");
	printf("아래에 내용을 입력하세요 (끝내려면 빈줄을 입력하세요.) \n");

	gets_s(buff, 256);
	while (buff[0] != '\0') {
		fputs(buff, fp);
		fputs("\n", fp);
		gets_s(buff, 256);
	}
	fclose(fp);

	//입력받은 문자열 출력하기
	fopen_s(&fp, "new file.txt", "r");

	printf("입력하신 내용은 다음과 같습니다. \n");
	while (!feof(fp)) {
		fgets(buff, 256, fp);
		if (!feof(fp)) {
			printf("%s", buff);
		}
	}
	fclose(fp);
}