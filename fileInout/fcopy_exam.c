#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	FILE* fpSrc;
	FILE* fpDest;

	char caSrcFileName[20];
	char caDestFileName[20];

	//������ ���� ����
	printf("������ ���ϸ��� �Է��ϼ���(�ִ� 20����) :");
	scanf_s("%s", caSrcFileName, 20);
	fopen_s(&fpSrc, caSrcFileName, "r");
	if (fpSrc == NULL) {
		printf("���� ������ ã�� ���߽��ϴ�. \n");
		return 0;
	}

	//����� ���� �����
	printf("���� ���� ���ϸ��� �Է��ϼ���.(�ִ� 20����) :");
	scanf_s("%s", caDestFileName, 20);
	fopen_s(&fpDest, caDestFileName, "w");
	if (fpDest == NULL) {
		printf("���ο� ������ ����µ� �����߽��ϴ�. \n");
		return 0;
	}

	{//���� �����ϱ�
		char temp;
		while ((temp = getc(fpSrc)) != EOF) {
			putc(temp, fpDest);
		}
	}

	//���� �ݱ�
	fclose(fpSrc);
	fclose(fpDest);
}