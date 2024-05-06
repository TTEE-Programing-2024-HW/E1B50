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
	 
	int password,i; /*宣告變數*/ 
	for(i=0;i<=3;i++)
	{
		printf("請輸入密碼:");
		scanf("%d",&password); /*讀取輸入密碼*/ 
		if(password==2024)     /*if-else條件敘述*/ 
		{
			printf("密碼正確\n");
			break;    /*跳出迴圈*/ 
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
	system("pause");     /*暫停畫面 等使用者按任意鍵*/ 
	system("CLS");        /*清除螢幕*/ 
	
	/*2.清除螢幕，螢幕出現主選單，如下所示:(可自行設計個人風格的選單) */
	while(1){
	puts("----E----1----B----50----");     /*印出主選單*/ 
	puts(" |  a.+-*畫出直角三角形 *-+ | ");
	puts(" |  b.+-*顯示乘法表  *-+ | ");
	puts(" |  c.+-*結束           *-+ | ");
	puts(" --G--U--A--N--C--H--E--N--   ");
	fflush(stdin);    
	
	/*3. 使用者若輸入‘A’或‘a’，則清除螢幕，並要求輸入一個‘a’到‘n’的字元。
	接著根據輸入字元顯現一直角三角形，例如輸入為‘c’，則出現右圖。使用者按下任何鍵(可用getch()函數)則清除螢幕，並回到主選單。
	若輸入字元不在‘a’至‘n’區間，需出現警告訊息並要求重新輸入。*/
	
	int w,z,n,num,g,h;     /*宣告變數*/ 
	char ch,i,j,b;        /*宣告變數*/
	printf("輸入一個字元:");
	fflush(stdin);    /*使input淨空，常放在scanf()前面*/ 
	scanf("%c",&b);
	switch(b)         /*switch條件判斷*/ 
	{
		case'A':
		case'a': 
		
			system("CLS");
			printf("輸入一個a到n的字元:");
			scanf("%c",&w);  /*讀取輸入的字元*/ 
			if(w<'a'||w>'n'){
				printf("輸入錯誤,請再輸入一次:\n");
				scanf("%c",&w);
				system("CLS");
				
			}
			else{
				for(i=b;i>='a';i--){   /*從i逐漸遞減至a*/ 
					for(j=i-'a';j>0;j--)
					printf(" "); /*行中間插入空格*/ 
				}
				for(j=i;j<=b;j++)
				{
					printf("%c",j);
				}
				printf("\n");
			}
			system("CLS");  /*清除螢幕*/ 
			break;
			
			/*4.使用者若輸入‘B’或‘b’，要求使用者輸入一個1至9的整數n，接著產生1*1至n*n的乘法表。
			此時使用者按下任何鍵(可用getch()函數)則清除螢幕，並回到主選單。若n不在1至9，需出現警告訊息並要求重新輸入。
			請注意輸出的排版務必整齊。*/
			
			case'B':
			case'b':
			
			system("CLS");
			printf("輸入一個1到9的整數:");
			scanf("%d",&num);  /*讀取輸入的整數*/ 
			while(num<1|| num>9){
			printf("輸入錯誤,請再輸入一次\n");
			printf("輸入一個1到9的整數:");	
			scanf("%d",&num); 
			}
			for(g=1;g<=num;g++)
			{
				for(h=1;h<=g;h++){    /*印出乘法表*/ 
					printf("%d*%d=%d",g,h,g*h);
					printf("\n");
				}
			}
			getch();
			system("CLS");
			break;
			
			/*5.使用者若輸入‘C’或‘c’，在螢幕上輸出‘Continue? (y/n)’詢問是要重新輸入？
			如果使用者輸入‘Y’或‘y’,則回到2;如果使用者輸入的是‘N’或‘n’。
			則結束程式回到作業系統。若是其他鍵，則出現錯誤訊息並要求重新輸入。*/
			
			case'C':
			case'c':
			
			system("CLS");
			printf("Continue?(y/n)\n");
			while(1){
					fflush(stdin);  /*使input淨空，常放在scanf()前面*/
			scanf("%c",&ch);
			if(ch=='Y'||ch=='y')   /*if-else條件判斷*/ 
			{
				break ;      /*回到主選單*/ 
			}
		if(ch=='N'||ch=='n')
			{
				printf("程式結束\n");
				return 0 ;   /*結束程式*/ 
			}
			else 
			{
				printf("錯誤\n");
				printf("請重新輸入:");
				continue ;
			}
			}
		    
			
		}
	}
	}
	
	/*這次的實驗比起上次來說困難許多， 再加上又要使用github繳交，用一個完全陌生的東西對我來說也是一大挑戰。*/
	/*好在有助教給的影片講解以及同學的幫助，這次才能夠勉強完成這次作業。*/ 
	/* 但無論是程式或是github，都是有助於我們未來找工作的好夥伴，我也希望在這幾次的作業中能夠熟悉它，且能確實掌握。 
	/*經過這次如此艱難的挑戰後，我希望之後對寫程式能夠更得心應手。*/ 
  
	
