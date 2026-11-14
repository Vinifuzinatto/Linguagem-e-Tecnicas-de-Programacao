#include <stdio.h>

int main() {
	
	int matriz[4] [6] = {
	{2, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 13},
	{0, 0, 6, 0, 0, 0},
	}, i, j;
	
	//matriz[2] [5] = 13;
	//matriz[0] [0] = 2;
	//matriz[3] [2] = 6;
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 6; j++) {
			printf("|%d", matriz[i] [j]);
		}
		printf("| \n");
	}
	
	return 0;
}
