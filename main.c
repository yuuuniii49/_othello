#include <stdio.h> 
#define N 10

char gameboard[N][N];	 

void init_game(void);		// ���� �ʱ�ȭ �Լ� ���� 
int main(void)  {
	int user_x, user_y, turn=0, cnt;	// �Է���ǥ : user_x, user_y 
	
	init_game(); // ���� �ʱ�ȭ 
}
// ���� �ʱ�ȭ
void init_game(){
	int i, j;
	printf("======================\n\n");
	printf("  ������ �����մϴ�.\n\n");
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
