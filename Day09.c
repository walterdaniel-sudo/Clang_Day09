#include <stdio.h>

// ---- ���ǹ� ----
// switch ~ case�� ����:
//		switch (���� ��)
//		{
//			case �ش� ��:
//				���� ����;
//				break;
//		}
// 
// switch ~ case������ break Ű����� �ش� ������ Ż���ϴ� �뵵�� ���ȴ�
// �׷��� ���α׷��Ӱ� �ǵ������� break�� �ۼ����� �ʴ� ��쵵 �ִ�.
// switch ~ case������ ���� �� �������� ����, ������ ��ȯ�� �� �ִ� ��, ������ ����� ������ �ڼ�����
// �� case�� �ۼ��Ǵ� ���� �ݵ�� ����� �ۼ������ �Ѵ�.
//

int main()
{
	/*int num;

	printf("�Է�: ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
			printf("num�� 1�Դϴ�\n");
			break;
		case 2:
			printf("num�� 2�Դϴ�\n");
			break;
		case 3:
			printf("num�� 3�Դϴ�\n");
			break;
		case 4:
			printf("1 ~ 3 �� �ϳ��� �Է����ּ���");
			break;
	}*/

	/*int num;

	printf("�Է�: ");��
	scanf("%d", &num);

	switch (num)
	{
	case 4:
		printf("4 ");
	case 3:
		printf("3 ");
	case 2:
		printf("2 ");
	case 1:
		printf("1 ");
	}*/

	/*int num;

	printf("�Է�: ");
	scanf("%d", &num);

	switch (num >= 14)
	{
	case 1:
		printf("���: 14���� ũ�ų� ���� ��\n");
		break;
	}*/

	/*int num;

	printf("�Է�: ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("���: ��\n");
		break;
	default:
		printf("���: ����\n");
		break;
	}*/

	int kor, mat, eng;
	double avg;

	printf("����: ");
	scanf_s("%d", &kor);

	printf("����: ");
	scanf_s("%d", &mat);

	printf("����: ");
	scanf_s("%d", &eng);

	avg = (kor + mat + eng) / 3.0;

	printf("\n���: %.2f\n", avg);

	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		printf("���: A\n");
		break;
	case 8:
		printf("���: B\n");
		break;
	case 7:
		printf("���: C\n");
		break;
	case 6:
		printf("���: D\n");
		break;
	default:
		printf("���: F\n");
		break;
	}

	return 0;
}