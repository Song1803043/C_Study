#include <stdio.h>

struct tagCar
{
	char mondelName[30];
	int speed;
	int limitSpeed;
	int wheelCount;
};

struct tagRef
{
	char brandName[30];
	int length;
	int width;
	int powerConsumption;
};

struct tagMic
{
	char brandName[30];
	int length;
	int width;
	int powerConsumption;
};

typedef struct tagCar Car;
typedef struct tagRef Ref;
typedef struct tagMic Mic;

int main()
{
	Car car = { "����", 70, 220, 4 };
	
	printf("�𵨸�: %s\n����ӵ�:%d\n�ְ�ӵ�:%d\n������:%d\n", 
		car.mondelName, car.speed, car.limitSpeed, car.wheelCount);
	
	printf("\n");
	Car car2;
	
	printf("�ڵ��� �𵨸��� �Է��ϼ���: ");
	scanf_s("%s", &car2.mondelName, sizeof(car2.mondelName));

	printf("���� �ӵ��� �Է��ϼ���: ");
	scanf_s("%d", &car2.speed);

	printf("�ִ� �ӵ��� �Է��ϼ���: ");
	scanf_s("%d", &car2.limitSpeed);

	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &car2.wheelCount);

	printf("\n");
	printf("�𵨸�:%s\n����ӵ�:%d\n�ְ�ӵ�:%d\n������:%d\n",
		car2.mondelName, car2.speed, car2.limitSpeed, car2.wheelCount);

	// ���� �ִ� ������ǰ 2���� ����ü ����Ÿ Ÿ���� ����ð� ������ �����
	// ���� ä���� ����غ�����...

	Ref ref = { "�Ｚ", 180, 100, 900 };
	
	printf("\n\n");
	printf("�����\n\n�귣���̸�:%s\n����:%d\n�ʺ�:%d\n���¼Һ�:%d\n",
		ref.brandName, ref.length, ref.width, ref.powerConsumption);
	
	printf("\n");
	Ref ref2;
	printf("�귣�� �̸��� �Է��ϼ���: ");
	scanf_s("%s", &ref2.brandName, sizeof(ref2.brandName));

	printf("���̸� �Է��ϼ���(cm): ");
	scanf_s("%d", &ref2.length);

	printf("�ʺ� �Է��ϼ���(cm): ");
	scanf_s("%d", &ref2.width);

	printf("���¼Һ��� �Է��ϼ���(W): ");
	scanf_s("%d", &ref2.powerConsumption);

	printf("�귣���̸�:%s\n����:%d(cm)\n�ʺ�:%d(cm)\n���¼Һ�:%d(W)\n",
		ref2.brandName, ref2.length, ref2.width, ref2.powerConsumption);


	Mic mic = { "�Ｚ", 40, 700, 500 };

	printf("\n\n");
	printf("���ڷ�����\n\n�귣���̸�:%s\n����:%d\n�ʺ�:%d\n���¼Һ�:%d\n",
		ref.brandName, ref.length, ref.width, ref.powerConsumption);

	printf("\n");
	Mic mic2;
	printf("�귣�� �̸��� �Է��ϼ���: ");
	scanf_s("%s", &mic2.brandName, sizeof(mic2.brandName));

	printf("���̸� �Է��ϼ���(cm): ");
	scanf_s("%d", &mic2.length);

	printf("�ʺ� �Է��ϼ���(cm): ");
	scanf_s("%d", &mic2.width);

	printf("���¼Һ��� �Է��ϼ���(W): ");
	scanf_s("%d", &mic2.powerConsumption);

	printf("�귣���̸�:%s\n����:%d(cm)\n�ʺ�:%d(cm)\n���¼Һ�:%d(W)\n",
		mic2.brandName, mic2.length, mic2.width, mic2.powerConsumption);
	return 0;
}