#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#define ROWS 10
#define COLS 10 

int main(void)
{
	/*1. 在螢幕上出現個人風格的畫面(至少20行)，並要求使用者輸入4個數字的密碼(預設為2024)。
	若輸入正確，則出現歡迎訊息，並進入步驟2。若連續錯三次，則顯示警告訊息並結束程式。*/ 
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
	 
	 
	 void RandomSeating(char seating[ROWS][COLS])
	 {
	 	srand(time(0));
	 	int count=10;
	 	while(count>0)
	 	{
	 	int row = rand() % ROWS;
        int col = rand() % COLS;
        
        if(seating[ROWS][COLS]=='-')
		{
			seating[ROWS][COLS]=='*';
			count--;
		}
		 }
	 }
	 
	 void Seating(char seating[ROS]W[COLS])
	 {
	 	printf("123456789\n");
	 	int i,j;
	 	for(i=0;i<ROWS;i++){
	 		printf("%d",i+1);
	 		for(j=0;j<COLS;j++){
	 			printf("%d",seating[i][j]);
			 }
			 printf("\n");
		 }
	 }
	 
	 int suggestSeating (char seating[ROS]W[COLS],int numSeats)
	 {
	 	int i,j,h;
	 	for(i=0;i<ROWS;i++)
	 	{
	 		for (j = 0; j <= COLS - numSeats; ++j) {
	 			bool available = true;
	 			for(h=0;h<numSeats;h++)
	 			{
	 				if(seating[i][j+h]!='-')
	 				{
	 					available = false;
	 					break;
					 }
				 }
			if(available)	 
			{
				for(h=0;h<numSeats;h++)
				{
				  seating[i][j+h]='@';	
				}
				return 1;
			}
		 }
	 }
	   return 0;
	 }
	 
	 
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
	
	void Seats(char seats[ROWS][COLS]){
			int i,j,k;
			for(i=0;i<ROWS;i++){
				for(j=0;j<COLS;j++){
					seats[i][j]='0';
				}
			}
			
		}
		puts("----E----1----B----50----");
		puts("-----[BookingSystem]-----");
		puts("|  a. Available seats   |");
		puts("|  b. Arrange for you   |");
		puts("|  c. Choose by yourself|");
		puts("|  d. Exit              |");
		puts("--G--U--A--N--C--H--E--N ");
		fflush(stdin);
	    system("pause");
		
		
		 
	return 0;
	} 
	
	
