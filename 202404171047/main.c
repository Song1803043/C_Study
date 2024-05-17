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
	Car car = { "에쿠스", 70, 220, 4 };
	
	printf("모델명: %s\n현재속도:%d\n최고속도:%d\n바퀴수:%d\n", 
		car.mondelName, car.speed, car.limitSpeed, car.wheelCount);
	
	printf("\n");
	Car car2;
	
	printf("자동차 모델명을 입력하세요: ");
	scanf_s("%s", &car2.mondelName, sizeof(car2.mondelName));

	printf("현재 속도를 입력하세요: ");
	scanf_s("%d", &car2.speed);

	printf("최대 속도를 입력하세요: ");
	scanf_s("%d", &car2.limitSpeed);

	printf("바퀴수를 입력하세요: ");
	scanf_s("%d", &car2.wheelCount);

	printf("\n");
	printf("모델명:%s\n현재속도:%d\n최고속도:%d\n바퀴수:%d\n",
		car2.mondelName, car2.speed, car2.limitSpeed, car2.wheelCount);

	// 집에 있는 가전제품 2개의 구조체 데이타 타입을 만드시고 변수를 만들고
	// 값을 채워서 출력해보세요...

	Ref ref = { "삼성", 180, 100, 900 };
	
	printf("\n\n");
	printf("냉장고\n\n브랜드이름:%s\n길이:%d\n너비:%d\n전력소비:%d\n",
		ref.brandName, ref.length, ref.width, ref.powerConsumption);
	
	printf("\n");
	Ref ref2;
	printf("브랜드 이름을 입력하세요: ");
	scanf_s("%s", &ref2.brandName, sizeof(ref2.brandName));

	printf("길이를 입력하세요(cm): ");
	scanf_s("%d", &ref2.length);

	printf("너비를 입력하세요(cm): ");
	scanf_s("%d", &ref2.width);

	printf("전력소비량을 입력하세요(W): ");
	scanf_s("%d", &ref2.powerConsumption);

	printf("브랜드이름:%s\n길이:%d(cm)\n너비:%d(cm)\n전력소비:%d(W)\n",
		ref2.brandName, ref2.length, ref2.width, ref2.powerConsumption);


	Mic mic = { "삼성", 40, 700, 500 };

	printf("\n\n");
	printf("전자레인지\n\n브랜드이름:%s\n길이:%d\n너비:%d\n전력소비:%d\n",
		ref.brandName, ref.length, ref.width, ref.powerConsumption);

	printf("\n");
	Mic mic2;
	printf("브랜드 이름을 입력하세요: ");
	scanf_s("%s", &mic2.brandName, sizeof(mic2.brandName));

	printf("길이를 입력하세요(cm): ");
	scanf_s("%d", &mic2.length);

	printf("너비를 입력하세요(cm): ");
	scanf_s("%d", &mic2.width);

	printf("전력소비량을 입력하세요(W): ");
	scanf_s("%d", &mic2.powerConsumption);

	printf("브랜드이름:%s\n길이:%d(cm)\n너비:%d(cm)\n전력소비:%d(W)\n",
		mic2.brandName, mic2.length, mic2.width, mic2.powerConsumption);
	return 0;
}