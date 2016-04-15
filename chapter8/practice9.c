#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIRECT_NUM 4
#define MAP_SIZE 10

int main(void) {
	int stepDirc;
	char map[MAP_SIZE][MAP_SIZE];
	int stepRowIdx = 0, stepColIdx = 0;
	int stepRowIdxTemp, stepColIdxTemp;

	/* initial all to zero */
	for (int row = 0; row < MAP_SIZE; row++) {
		for (int col = 0; col < MAP_SIZE; col++) {
			map[row][col] = '.';
		}
	}
	map[0][0] = 'A';

	srand((unsigned) time(NULL));

	for (char stepIdx = 'B'; stepIdx <= 'Z'; stepIdx++) {

		/* test if no way to go */
		if (stepRowIdx == 0 && stepColIdx > 0 && stepColIdx < 9) {
			if (map[stepRowIdx][stepColIdx - 1] != '.'
					&& map[stepRowIdx][stepColIdx + 1] != '.'
					&& map[stepRowIdx + 1][stepColIdx] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx == 0 && stepColIdx == 9) {
			if (map[0][8] != '.' && map[1][9] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx == 9 && stepColIdx > 0 && stepColIdx < 9) {
			if (map[stepRowIdx][stepColIdx - 1] != '.'
					&& map[stepRowIdx][stepColIdx + 1] != '.'
					&& map[stepRowIdx - 1][stepColIdx] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx == 9 && stepColIdx == 9) {
			if (map[9][8] != '.' && map[8][9] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx > 0 && stepRowIdx < 9 && stepColIdx == 0) {
			if (map[stepRowIdx - 1][stepColIdx] != '.'
					&& map[stepRowIdx + 1][stepColIdx] != '.'
					&& map[stepRowIdx][stepColIdx + 1] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx > 0 && stepRowIdx < 9 && stepColIdx == 9) {
			if (map[stepRowIdx - 1][stepColIdx] != '.'
					&& map[stepRowIdx + 1][stepColIdx] != '.'
					&& map[stepRowIdx][stepColIdx - 1] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx == 9 && stepColIdx == 0) {
			if (map[8][0] != '.' && map[9][1] != '.') {
				break;
			}
			else {
			}
		}
		else if (stepRowIdx > 0 && stepRowIdx < 9 && stepColIdx > 0
				&& stepColIdx < 9) {
			if (map[stepRowIdx - 1][stepColIdx] != '.'
					&& map[stepRowIdx + 1][stepColIdx] != '.'
					&& map[stepRowIdx][stepColIdx - 1] != '.'
					&& map[stepRowIdx][stepColIdx + 1] != '.') {
				break;
			}
			else {
			}
		}

		do {
			stepDirc = rand() % DIRECT_NUM;

			stepRowIdxTemp = stepRowIdx;
			stepColIdxTemp = stepColIdx;

			/* 0 --> UP; 1 --> DOWN; 2 --> LEFT; 3 --> RIGHT */
			switch (stepDirc) {
			case 0:
				stepRowIdxTemp -= 1;
				break;
			case 1:
				stepRowIdxTemp += 1;
				break;
			case 2:
				stepColIdxTemp -= 1;
				break;
			case 3:
				stepColIdxTemp += 1;
				break;
			}
		}
		while (stepRowIdxTemp < 0 || stepColIdxTemp < 0 || stepRowIdxTemp > 9
				|| stepColIdxTemp > 9 || map[stepRowIdxTemp][stepColIdxTemp] != '.');

		stepRowIdx = stepRowIdxTemp;
		stepColIdx = stepColIdxTemp;
		map[stepRowIdx][stepColIdx] = stepIdx;
	}

	/* print final map */
	for (int row = 0; row < MAP_SIZE; row++) {
		for (int col = 0; col < MAP_SIZE; col++) {
			printf("%3c", map[row][col]);
		}
		printf("\n");
	}

	return 0;
}
