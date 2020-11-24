#include <stdio.h> 
#define N 10

char gameboard[N][N];	 

void init_game(void);		// 게임 초기화 함수 선언 
int main(void)  {
	int user_x, user_y, turn=0, cnt;	// 입력좌표 : user_x, user_y 
	
	init_game(); // 게임 초기화 
}
// 게임 초기화
void init_game(){
	int i, j;
	printf("======================\n\n");
	printf("  게임을 시작합니다.\n\n");
	printf("======================\n\n");
	for(i=0; i<N; i++) {
		for(j=0; j<N; j++) {
			gameboard[i][j] = ' ';
		}
	}
	gameboard[N/2][N/2] = 'O';
	gameboard[N/2-1][N/2-1] = 'O';
	gameboard[N/2][N/2-1] = 'X';
	gameboard[N/2-1][N/2] = 'X';
	// print_board();
} 
