#include <stdio.h>

// switch-case �� (���ù�
// �������� ��ȭ�� ���� �б�ó����..

// ������
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


// 0�� TV On, 1�� Tv Off, 2�� Vol Up, 3�� Vol Down, 4�� Chan Up, 5�� Chan Down, 6�� ����
int main()
{
	int buttonNum = 0;
	int loop = 1;

	while(loop) {
		printf("��Ʈ�� ��ȣ�� �Է��ϼ���: ");
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