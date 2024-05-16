#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	/*1. 螢幕上出現個人風格的畫面(至少20行)，並要求使用者輸入4個數字的密碼(密碼值預設為2024)。
	若輸入正確，則進入步驟2。若連續錯三次，則顯示警告訊息並結束程式。請在畫面上顯示密碼值以便檢查。*/ 
	puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");  /*印出帶有個人風格的畫面*/ 
	puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");
	
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU     eeeeeeeee        1111       bbbbbbbb          5555555         00000000        AAA");
	puts("UUU     ee              11111       b       b         55              0      0        AAA");
	puts("UUU     ee             111111       b        b        55              0      0        AAA");
	puts("UUU     ee            1111111       b       b         55              0      0        AAA");
	puts("UUU     eeeeeeeee         111       bbbbbbbb          5555555         0      0        AAA");
	puts("UUU     ee                111       b       b              55         0      0        AAA");
	puts("UUU     ee                111       b        b             55         0      0        AAA");
	puts("UUU     ee                111       b       b              55         0      0        AAA");
	puts("UUU     eeeeeeeee      11111111     bbbbbbbb          5555555         00000000        AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	
	puts("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
	puts("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
	system("PAUSE");  /*暫停畫面 等使用者按任意鍵*/ 
	system("CLS");  /*清除螢幕*/ 
	 
	int password,i;
	for(i=0;i<=3;i++)
	{
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2024)
		{
			printf("密碼正確\n");
			break;
		}
		else
		{
			printf("錯誤,請重新輸入\n");
			if(i==2){
				printf("錯誤過多,結束程式\n");
				return 0;
			}
		}
	}
	system("pause");
	system("CLS");
	} 
