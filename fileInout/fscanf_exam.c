#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp;
	char buff[256];

	//���Ͽ� ���ڿ� �Է¹ޱ�.
	fopen_s(&fp, "new file.txt", "w");
	printf("�Ʒ��� ������ �Է��ϼ��� (�������� ������ �Է��ϼ���.) \n");

	gets_s(buff, 256);
	while (buff[0] != '\0') {
		fputs(buff, fp);
		fputs("\n", fp);
		gets_s(buff, 256);
	}
	fclose(fp);

	//�Է¹��� ���ڿ� ����ϱ�
	fopen_s(&fp, "new file.txt", "r");

	printf("�Է��Ͻ� ������ ������ �����ϴ�. \n");
	while (!feof(fp)) {
		fgets(buff, 256, fp);
		if (!feof(fp)) {
			printf("%s", buff);
		}
	}
	fclose(fp);
}