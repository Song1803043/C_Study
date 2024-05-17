#include <stdio.h>

// switch-case 문 (선택문
// 정수값의 변화에 따라서 분기처리시..

// 열거형
enum ControlNum 
{
	TVON,
	TVOFF,
	VOLUMEUP,
	VOLUMEDOWN,
	CHANNELUP,
	CHANNELDOWN,
	EXIT = 100
};


// 0번 TV On, 1번 Tv Off, 2번 Vol Up, 3번 Vol Down, 4번 Chan Up, 5번 Chan Down, 6번 오류
int main()
{
	int buttonNum = 0;
	int loop = 1;

	while(loop) {
		printf("컨트롤 번호를 입력하세요: ");
		scanf_s("%d", &buttonNum);

		switch (buttonNum)
		{
		case TVON:
			printf("TV ON\n");
			break;

		case TVOFF:
			printf("TV OFF\n");
			break;

		case VOLUMEUP:
			printf("VOLUME UP\n");
			break;

		case VOLUMEDOWN:
			printf("VOLUME DOWN\n");
			break;

		case CHANNELUP:
			printf("CHANNEL UP\n");
			break;

		case CHANNELDOWN:
			printf("CHANNEL DOWN\n");
			break;

		case EXIT:
			loop = 0;
			break;

		default:
			printf("WrongNumber\n");
			break;
		
		}
	}
	return 0;
}