#include <stdio.h>

void board(int arr[][19]);
int win(int cnt);
int game(int arr[][19]);


int main() {
	int arr[19][19] = { 0,0 };
	int i, j, k, x, y, s = 1, cnt = 0;
	while (1) {
		board(arr, sizeof(arr[0]) / sizeof(int), sizeof(arr) / sizeof(arr[0]));
		scanf("%d %d", &x, &y);
		if (arr[x][y] == 0) {
			if (s % 2 != 0) {
				arr[x][y] = 1;
				s++;
			}
			else {
				arr[x][y] = 2;
				s++;
			}
		}
		else continue;
		if (win(game(arr, sizeof(arr[0]) / sizeof(int), sizeof(arr) / sizeof(arr[0]))) == 1) return 0;
	}
	return 0;
}
//오목 승패판별
int game(int arr[][19]) {
	int cnt = 0;
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (!arr[i][j]) continue;
			if (arr[i][j] == 1 || arr[i][j] == 2) {
				for (int k = 0; k < 5; k++) {
					if (arr[i][j] == arr[i][j + k]) { // 가로 오목 확인
						cnt++;
					}
				}
				if (cnt == 5) return arr[i][j];
				else cnt = 0;
			} 
		} 
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (!arr[i][j]) continue;
			if (arr[i][j] == 1 || arr[i][j] == 2) {
				for (int k = 0; k < 5; k++) {
					if (arr[i][j] == arr[i + k][j]) { // 세로 오목 확인
						cnt++;
					}
					if (cnt == 5) return arr[i][j];
					else cnt = 0;
				}
			}
		}
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (!arr[i][j]) continue;
			if (arr[i][j] == 1 || arr[i][j] == 2) {
				for (int k = 0; k < 5; k++) {
					if (arr[i][j] == arr[i + k][j + k]) { // 왼쪽위->오른쪽아래 대각선 오목 확인
						cnt++;
					}
					if (cnt == 5) return arr[i][j];
					else cnt = 0;
				}
			}
		}
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (!arr[i][j]) continue;
			if (arr[i][j] == 1 || arr[i][j] == 2) {
				for (int k = 0; k < 5; k++) {
					if (arr[i][j] == arr[i + k][j - k]) { // 오른쪽위 -> 왼쪽아래 대각선 세로 오목 확인
						cnt++;
					}
					if (cnt == 5) return arr[i][j];
					else cnt = 0;
				}
			}
		}
	}
	return 0;
}
//오목 판 출력
void board(int arr[][19]) {
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
}
//승리출력
int win(int color) {
	if (color == 1) {
		printf("흑돌 승!");
		return 1;
	}
	else if (color == 2) {
		printf("백돌 승!");
		return 1;
	}
	else return 0;
}