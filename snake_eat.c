#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<synchapi.h> 

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

int isChangeDir(int,int); //�ж��Ƿ�ת�� 
int snakeMove(int,int,int*); //�ƶ� 
int putFood();
int output(); //������� 
int gameover(); //�����Ϸ���� 

char map[12][13]= 
	{"************",
	"*XXXXH     *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*     $    *",
	"*          *",
	"*          *",
	"*          *",
	"************"};
	
int snakeX[SNAKE_MAX_LENGTH]={5,4,3,2,1}; //�ߺ����� 
int snakeY[SNAKE_MAX_LENGTH]={1,1,1,1,1}; //�������� 
int snakeLength=5; //�߳��� 

int main() {
	int flag=1; //�����ж���Ϸ���� 
	char diretion='d'; //��ǰ���� 
	char preDiretion='d'; //׼������ 
	
	output(); //��ʼ��� 
	while(flag) {
		Sleep(500);
		system("cls"); //���� 
		
		if(kbhit()) { //���������ʱ 
			preDiretion=getch(); 
			if(isChangeDir(preDiretion,diretion)) {
				diretion=preDiretion; //�ı䷽�� 
			}
		}
		
		switch(diretion) { //��ָ�������ƶ����ж��Ƿ��޸�flag 
			case 'a':snakeMove(-1,0,&flag);break;
			case 'w':snakeMove(0,-1,&flag);break;
			case 's':snakeMove(0,1,&flag);break;
			case 'd':snakeMove(1,0,&flag);break;
		}
		
		output();
	}
	gameover();
	
	return 0;
}

int isChangeDir(int preDiretion,int diretion) {
	int flag=0;
	
	switch(diretion) { //�����򲻹���ʱ��Ҫ�ı䵱ǰ���� 
		case 'a': case 'd':
			if(preDiretion == 'w' || preDiretion == 's') {
				flag=1;
			}
			break;
		case 'w': case 's':
			if(preDiretion == 'a' || preDiretion == 'd') {
				flag=1;
			}
			break;
	}
	
	return flag;
}

int snakeMove(int x,int y,int *flag) {
	int i,temp[2];
	
	temp[0]=snakeY[snakeLength-1]; //�ݴ�β������ 
	temp[1]=snakeX[snakeLength-1];
	
	map[snakeY[snakeLength-1]][snakeX[snakeLength-1]]=BLANK_CELL; //β���ƶ������ԭλ 
	
	for(i=snakeLength-1;i>0;i--) { //�޸��������� 
		snakeX[i]=snakeX[i-1];
		snakeY[i]=snakeY[i-1];
	}
	snakeX[0]+=x; //�޸�ͷ���� 
	snakeY[0]+=y;
	
	for(i=snakeLength-1;i>0;i--) {
		map[snakeY[i]][snakeX[i]]=SNAKE_BODY; //�����ƶ� 
	}
	if(map[snakeY[0]][snakeX[0]] == BLANK_CELL) {
		map[snakeY[0]][snakeX[0]]=SNAKE_HEAD; //δ������ͷ�ƶ� 
	}
	else if(map[snakeY[0]][snakeX[0]] == SNAKE_FOOD) {
		map[snakeY[0]][snakeX[0]]=SNAKE_HEAD;
		if(snakeLength<SNAKE_MAX_LENGTH) {
			snakeLength++; //�߳��ȼ�һ 
			snakeY[snakeLength-1]=temp[0];
			snakeX[snakeLength-1]=temp[1];
			map[snakeY[snakeLength-1]][snakeX[snakeLength-1]]=SNAKE_BODY; //β���ӳ�
		} 
		putFood(); //��ʳ�� 
	}
	else {
		map[snakeY[0]][snakeX[0]]=SNAKE_HEAD;
		*flag=0; //ͷײǽ��ҧ�����壬��Ϸ���� 
	}
	
	return 0;
}

int putFood() {
	int x=0,y=0;
	
	while(map[y][x] != BLANK_CELL) { //��ǰ���겻Ϊ�� 
		srand((unsigned int) time(NULL));
		x=rand()%11; //��������� 
		y=rand()%11;
	}
	map[y][x]=SNAKE_FOOD; //����ʳ�� 
	
	return 0;
}

int output() {
	int i;
	for(i=0;i<12;i++) {
		printf("%s\n",map[i]);
	}
	return 0;
}

int gameover() {
	printf("Game Over!!\n");
	return 0;
}

/*

*/
