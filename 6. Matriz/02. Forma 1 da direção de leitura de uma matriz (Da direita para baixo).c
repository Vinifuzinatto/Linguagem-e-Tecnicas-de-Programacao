#include <stdio.h>

int main() {
	
	int x[3] [4] = {
	{4, 5, 1, 10},
	{16, 11, 76, 8},
	{9, 54, 32, 89},
	}, i, j;
	
	for(i = 0; i < 3; i++) {
		printf("Elementos da linha %d \n", i);
		for(j = 0; j < 4; j++)
			printf("%d \n", x[i] [j]);
	}
	
	return 0;
}
