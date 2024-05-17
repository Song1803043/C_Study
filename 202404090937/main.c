#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));

	int randValue = rand();
	int directValue = randValue % 4; // 0 : up 1: down 2: left 3: right
	
	printf(" randValue = %d, directValue = %d\n", randValue, directValue);

	randValue = rand();
	directValue = randValue % 4; // 0 : up 1: down 2: left 3: right

	printf(" randValue = %d, directValue = %d\n", randValue, directValue);

	randValue = rand();
	directValue = randValue % 4; // 0 : up 1: down 2: left 3: right

	printf(" randValue = %d, directValue = %d\n", randValue, directValue);

	randValue = rand();
	directValue = randValue % 4; // 0 : up 1: down 2: left 3: right

	printf(" randValue = %d, directValue = %d\n", randValue, directValue);

	return 0;
}