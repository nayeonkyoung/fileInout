#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp;
	char buff[256];

	//���� �Է¹޾� ���Ͽ� �����ϱ�.
	fopen_s(&fp, "test.txt", "w");
	printf("���ϴ� ������ �Է��ϼ���. \n");
	scanf_s("%s", buff, 256);
	fprintf(fp, "%256s", buff);
	fclose(fp);

	//���Ͽ��� ���� �Է¹޾Ƽ� ȭ�鿡 ����ϱ�.
	fopen_s(&fp, "test.txt", "r");
	printf("�Է��Ͻ� ������\n");
	fscanf_s(fp, "%256s", buff, 256);
	printf("%s\n", buff);
	printf("�Դϴ�.\n");
	fclose(fp);
}