#include"My_project.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>

/*2020-08-20 ������Ʈ ���� ver_1 */
/*1. ���� ��� �ذ�
  2. ID,PWD�Է�â �������.      */

/* ������ �ؾ��� ��
  1. �޸��忡 ȸ�������� ���� �б� �����ϰ� �����.   */


/*	���� : �α��� â �����
	1. ID, PWD �Է�â  -> .txt ���Ͽ� ����Ǿ��ִ� ������ ���ϱ�.
	2. ȸ������ �����. ->  .txt���Ͽ� ������ �� �ְ� �����( �ҷ��ٰ� �� �� �ְ� ����� )
	+ ���� ��� �����	*/   
 

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
				printf("�α��εǾ����ϴ�.");
			else
				//goto re;
	return 0;
}

int login() {

	scr();			// x,y (40,)
	login_text();   // �ؽ�Ʈ�ڽ� 41,6  / 79, 14 

	return 0;
}


void login_text() {		// �ؽ�Ʈ�ڽ� 41,6  / 79, 14 
	
	inform  MI;
	//������ ����ü ����??�ڸ�

	gotoxy(41, 6); // txt box.
	printf("�ݰ����ϴ�.���� ������Ʈ ���α׷��Դϴ�."); gotoxy(41, 7);
	printf("ID��PWD�� �Է����ּ���."); gotoxy(41, 9);
	printf("ȸ�� ���� ��� \"o\" üũ���ּ���. "); 
	gotoxy(41, 10); printf("���� ��� ID��PWD �ǳʶپ��ּ���.");

	gotoxy(_x + 9, 20);
	printf("=========================");
	gotoxy(_x + 9, 21); printf("I D :"); 
	gotoxy(_x + 9, 22); printf("pwd :");
	gotoxy(_x + 9, 23); printf("���Կ���:");

		//��ǥ               //�Է�			       //���� ���� ���
		gotoxy(_x + 15, 21); scanf("%s", MI.ID);   My_Buffer(); 
		gotoxy(_x + 15, 22); scanf("%s", MI.pwd);  My_Buffer();
		gotoxy(_x + 18, 23); scanf("%c", &MI.o_x); My_Buffer(); 

	 printf("%c", MI.o_x);
	 tolower(MI.o_x);							//�빮�� �Է� �� �ҹ��ڷ� ��ȯ

		if (MI.o_x == 'o') {
			gotoxy(_x + 9, 19); printf("ȸ������ â���� �̵��մϴ�.");
			Sleep(1000);
			//ȸ������ �Լ� �߰� �κ� 

		}
		else{
			gotoxy(_x + 9, 19); printf("ȸ�������ϼ̱���?");
			}

	//info_check();
}

void add_Member() {

}

int info_check() {

	//���� ���� �а� �ű� �ִ� id, pwd �����ϱ�.  
	//FILE* ffile = fopen("information.txt","r");

	return 0; //������ 1 Ʋ���� 0 ��ȯ�Ͽ��� Ʋ���� �ٽ� �α���â���� ���ư��� 
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
