#include <stdio.h>

// ---- 조건문 ----
// switch ~ case의 원형:
//		switch (비교할 값)
//		{
//			case 해당 값:
//				종속 문장;
//				break;
//		}
// 
// switch ~ case문에서 break 키워드는 해당 문법을 탈출하는 용도로 사용된다
// 그러나 프로그래머가 의도적으로 break를 작성하지 않는 경우도 있다.
// switch ~ case문에서 비교할 값 공간에는 정수, 정수로 변환할 수 있는 값, 정수가 저장된 변수만 박성가능
// 각 case에 작성되는 값은 반드시 상수로 작성해줘야 한다.
//

int main()
{
	/*int num;

	printf("입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
			printf("num은 1입니다\n");
			break;
		case 2:
			printf("num은 2입니다\n");
			break;
		case 3:
			printf("num은 3입니다\n");
			break;
		case 4:
			printf("1 ~ 3 중 하나를 입력해주세요");
			break;
	}*/

	/*int num;

	printf("입력: ");ㅋ
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

	printf("입력: ");
	scanf("%d", &num);

	switch (num >= 14)
	{
	case 1:
		printf("출력: 14보다 크거나 같은 수\n");
		break;
	}*/

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("출력: 참\n");
		break;
	default:
		printf("출력: 거짓\n");
		break;
	}*/

	int kor, mat, eng;
	double avg;

	printf("국어: ");
	scanf_s("%d", &kor);

	printf("수학: ");
	scanf_s("%d", &mat);

	printf("영어: ");
	scanf_s("%d", &eng);

	avg = (kor + mat + eng) / 3.0;

	printf("\n평균: %.2f\n", avg);

	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		printf("등급: A\n");
		break;
	case 8:
		printf("등급: B\n");
		break;
	case 7:
		printf("등급: C\n");
		break;
	case 6:
		printf("등급: D\n");
		break;
	default:
		printf("등급: F\n");
		break;
	}

	return 0;
}