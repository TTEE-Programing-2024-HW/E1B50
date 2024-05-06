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
	
	/*2.清除螢幕，螢幕出現主選單，如下所示:(可自行設計個人風格的選單) */
	while(1){
	puts("----E----1----B----50----");
	puts(" |  a.+-*畫出直角三角形 *-+ | ");
	puts(" |  b.+-*顯示乘法表  *-+ | ");
	puts(" |  c.+-*結束           *-+ | ");
	puts(" --G--U--A--N--C--H--E--N--   ");
	
	/*3. 使用者若輸入‘A’或‘a’，則清除螢幕，並要求輸入一個‘a’到‘n’的字元。
	接著根據輸入字元顯現一直角三角形，例如輸入為‘c’，則出現右圖。使用者按下任何鍵(可用getch()函數)則清除螢幕，並回到主選單。
	若輸入字元不在‘a’至‘n’區間，需出現警告訊息並要求重新輸入。*/
	
	int a,w,i,j,z,n,num,g,h;
	char ch;
	printf("輸入一個字元:");
	scanf("%c",&a);
	switch(a)
	{
		case'A':
		case'a': 
		
			system("CLS");
			printf("輸入一個a到n的字元:");
			scanf("%c",&w);
			while(w<'a'||w>'n'){
				printf("輸入錯誤,請再輸入一次\n");
				printf("輸入一個a到n的字元:");
				scanf("%c",&w);
				system("CLS");
				
			}
			n=w-'a'+1;
			for(i=0;i<n,i++){
				for(j=0,j<=i,j++)
				printf("%c",w+j);
				w--;
				for(z=n;z>i+1;z--)
				printf(" ");
				printf("\n");
			}
			
			getch();
			system("CLS");
			break;
			
			
			case'B':
			case'b':
			
			system("CLS");
			printf("輸入一個1到9的整數:");
			scanf("%d",&num);
			while(num<1|| num>9){
			printf("輸入錯誤,請再輸入一次\n");
			printf("輸入一個1到9的整數:");	
			scanf("%d",&num); 
			}
			for(g=1;g<=num;g++)
			{
				for(h=1;h<=g;h++){
					printf("%d*%d",g,h,g*h);
					printf("\n");
				}
			}
			getch();
			system("CLS");
			break;
			
			case'C':
			case'c':
			
			system("CLS");
			printf("Continue?(y/n)\n");
			scanf("%c",&ch);
			if(ch=='Y'||ch=='y')
			{
				break ;
			}
			if(ch=='N'||ch=='n')
			{
				return 0;
			}
			else if
			{
				printf("錯誤\n");
				continue ;
			}
		}
	}
	}
	
	
  
	
