#include"My_project.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>

/*2020-08-20 프로젝트 시작 ver_1 */
/*1. 심플 배경 해결
  2. ID,PWD입력창 만들었음.      */

/* 앞으로 해야할 것
  1. 메모장에 회원데이터 쓰고 읽기 가능하게 만들기.   */


/*	주제 : 로그인 창 만들기
	1. ID, PWD 입력창  -> .txt 파일에 저장되어있는 데이터 비교하기.
	2. 회원가입 만들기. ->  .txt파일에 저장할 수 있게 만들기( 불러다가 쓸 수 있게 만들기 )
	+ 심플 배경 만들기	*/   
 

void add_Member();
void gotoxy(int x, int y);
void login_text();
int login();
void scr();

typedef struct INFORM {

	char ID[15];
	char pwd[30];
	char o_x;

} inform;

int main() {
	int i=0;

	//re:
		i=login();
	
			if (i == 1)
				printf("로그인되었습니다.");
			else
				//goto re;
	return 0;
}

int login() {

	scr();			// x,y (40,)
	login_text();   // 텍스트박스 41,6  / 79, 14 

	return 0;
}


void login_text() {		// 텍스트박스 41,6  / 79, 14 
	
	inform  MI;
	//포인터 구조체 선언??자리

	gotoxy(41, 6); // txt box.
	printf("반갑습니다.개인 프로젝트 프로그램입니다."); gotoxy(41, 7);
	printf("ID와PWD를 입력해주세요."); gotoxy(41, 9);
	printf("회원 없는 경우 \"o\" 체크해주세요. "); 
	gotoxy(41, 10); printf("없는 경우 ID와PWD 건너뛰어주세요.");

	gotoxy(_x + 9, 20);
	printf("=========================");
	gotoxy(_x + 9, 21); printf("I D :"); 
	gotoxy(_x + 9, 22); printf("pwd :");
	gotoxy(_x + 9, 23); printf("가입여부:");

		//좌표               //입력			       //버퍼 비우는 방법
		gotoxy(_x + 15, 21); scanf("%s", MI.ID);   My_Buffer(); 
		gotoxy(_x + 15, 22); scanf("%s", MI.pwd);  My_Buffer();
		gotoxy(_x + 18, 23); scanf("%c", &MI.o_x); My_Buffer(); 

	 printf("%c", MI.o_x);
	 tolower(MI.o_x);							//대문자 입력 시 소문자로 변환

		if (MI.o_x == 'o') {
			gotoxy(_x + 9, 19); printf("회원가입 창으로 이동합니다.");
			Sleep(1000);
			//회원가입 함수 추가 부분 

		}
		else{
			gotoxy(_x + 9, 19); printf("회원가입하셨군요?");
			}

	//info_check();
}

void add_Member() {

}

int info_check() {

	//파일 내용 읽고 거기 있는 id, pwd 대조하기.  
	//FILE* ffile = fopen("information.txt","r");

	return 0; //맞으면 1 틀리면 0 반환하여서 틀리면 다시 로그인창으로 돌아가기 
}

void scr() {
	int i;

	system("cls");

	gotoxy(_x,5);
	for (i = 0; i < _x+4; i++ ) {
		printf("=");
	}
	for (i = 1; i < 10; i++) {
		gotoxy(_x, 5 + i);
		printf(":");
	}
	for (i = 1; i < 10; i++) {
		gotoxy(83, 5 + i);
		printf(":");
	}
	gotoxy(_x,15);
	for (i = 0; i < _x+4; i++) {
		printf("=");
	}
}
void gotoxy(int x,int y) {
	
	COORD Cur;
	
	Cur.X = x;
	Cur.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
