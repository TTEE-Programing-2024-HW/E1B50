#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <ctype.h>
#include <string.h>
#define ROWS 9   /*Define the number of rows*/
#define COLS 9   /*Define the number of columns*/

void displayHeader() 
{
	puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");  /*Print images with a personal touch*/ 
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
	system("PAUSE");  /*Pause the screen and wait for the user to press any key*/ 
	system("CLS");  /*clear screen*/ 
}
	 
	 void generateRandomReservations(char seating[ROWS][COLS])  /*Randomly generate reserved seats*/
	 {
	 	srand(time(0)); /*Initialize random variables*/
	 	int count=10;   /*declare variables*/
	 	while(count>0)  /*while narration*/
	 	{
	 	int row = rand() % ROWS;
        int col = rand() % COLS;
        
        if(seating[ROWS][COLS]=='-')  /*if narration*/ /*If the seat is free*/
		{
			seating[ROWS][COLS]=='*';
			count--;
		}
		 }
	 }
	 
	 void pickSeating(char seating[ROWS][COLS])  /*Print seat distribution*/
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
	 
	 int suggestSeating (char seating[ROWS][COLS],int s)  /*Suggested seating arrangements*/
	 {
	 	int i,j,h;
	 	for(i=0;i<ROWS;i++)   /*for loop*/
	 	{
	 		for (j = 0; j <= COLS - s; ++j) {
	 			int available = 1;
	 			for(h=0;h<s;h++)
	 			{
	 				if(seating[i][j+h]!='-')
	 				{
	 					available = 0;
	 					break;
					 }
				 }
			if(available)	 /*if narration*/
			{
				for(h=0;h<s;h++)
				{
				  seating[i][j+h]='@';	
				}
				return 1;
			}
		 }
	 }

	 
	 if(s==4)
	 {
	 	for(i=0;i<ROWS-1;i++)
		 {
		 	for(j=0;j<COLS-1;j++)
		 	{
		 		if(seating[i][j]=='-'&&seating[i][j+1]=='-'&&seating[i+1][j]&&seating[i+1][j+1]=='-')
		 		{
		 		seating[i][j]='@';
		 		
				seating[i][j+1]='@';
				
				seating[i+1][j]='@';
				
				seating[i+1][j+1]='@';
				return 1;  /*Found a seat successfully*/
				 }
			 }
		 }
	 }
	 return 0;  /*Not enough consecutive empty seats found*/
}

void menuReservation(char seating[ROWS][COLS])   /*Book a seat manually*/
    {
    char input[10];
    while (1) 
	{
        printf(" 輸入座位 (1-2) 或「完成」到結束：");
        scanf("%s", input);  /*Scan the value of input*/
        
        if (strcmp(input, "完成") == 0)   /*Compares two strings for equality. Returns 0 if they are equal.*/
		break;   /*Get out of this loop*/
        if (strlen(input) != 3 || input[1] != '-' || !isdigit(input[0]) || !isdigit(input[2]))  /*strlen to calculate string length*/
		 {
            printf("輸入格式無效。 再試一次\n");
            continue;
        }
        int row = input[0] - '1';
        int col = input[2] - '1';
        
        if (row < 0 || row >= ROWS || col < 0 || col >= COLS || seating[row][col] != '-')
		 {
            printf("輸入格式無效。 再試一次。\n");
            continue;
        }
        seating[row][col] = '@';
        pickSeating(seating);
    }
    
    printf("Are you satisfied(你滿意嗎)?(y/n):");
    char character;  /*declare character*/
    scanf("%c",&character);
    if(character=='n')
    {
    	int i,j;
    	for(i=0;i<ROWS;i++)
    	{
    	for(j=0;j<COLS;j++)
    		{
    	if(seating[i][j]=='@')  /*if-else  narration*/
    			{
    			seating[i][j]='-';
				}
			}
		}
	}
	else
	{
		int i,j;
		for(i=0;i<ROWS;i++)
		{
    	for(j=0;j<COLS;j++)
			{
		if(seating[i][j]=='@')
				{
				seating[i][j]='*';
				}
			}
		}
	}
}

void handleoptionD()  /*Dealing with option D*/
 {
    while (1) 
	{
        printf("Continue? (y/n): ");  /*print this string*/
        char choose;
        scanf(" %c", &choose);
        if (choose == 'y') 
		{
            return;
        } if (choose == 'n')
	    {
            exit(0);
        } else 
		{
            printf("輸入無效。 請輸入 'y' or 'n'.\n");
        }
    }
}

int main(void)
{
	displayHeader();  /*Print pictures with your own style*/
	system("pause");  /*Pause the screen and wait for the user to press any key*/
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
		}
			if(i==2)  /*The number of entries exceeds the limit*/
			{  
				printf("錯誤過多,結束程式\n");
				return 0; /*End program*/
			}
	}
	char seating[ROWS][COLS];
	int g,j;
	for(g=0;g<ROWS;g++)
	{
		for(j=0;j<COLS;j++)
		{
			seating[g][j]='-';
		}
	}
	generateRandomReservations(seating);  /*Randomly generate reserved seats*/
	
	while(1)
	{  /*Print main menu*/
		printf("----E----1----B----50----");
		puts("-----[BookingSystem]-----");
		puts("|  a. Available seats   |");
		puts("|  b. Arrange for you   |");
		puts("|  c. Choose by yourself|");
		puts("|  d. Exit              |");
		puts("--G--U--A--N--C--H--E--N ");
		fflush(stdin);  /*Empty the input buffer and always place it before scanf()*/
	    char choose;
	    scanf("%c",&choose);
	    
	    switch(choose)  /*switch-case syntax*/
	    {
	    	case'a': /*If you choose a*/
	    		{
	    		system("cls");
                pickSeating(seating);
                printf("按任意鍵回主選單...");
                getchar(); getchar();  /*read a character*/
                system("cls");
                break;
			}
			case'b':  /*If you choose b*/
				{
				 system("cls");
                int s;
                printf("你需要幾個座位? (1-4): ");
                scanf("%d", &s);
                if (s < 1 || s > 4)  /*If s<1 and s>4*/
				{
                    printf("座位數無效。 再試一次\n");
                    break;
                }
                char tempSeating[ROWS][COLS];
                for (i = 0; i < ROWS; ++i) {
                    for (j = 0; j < COLS; ++j) {
                        tempSeating[i][j] = seating[i][j];
                    }
                }
                if (suggestSeating(tempSeating, s))
				 {
                    pickSeating(tempSeating);
                    printf("Are you satisfied ? (y/n): ");
                    char satisfaction;
                    scanf(" %c", &satisfaction);
                    if (satisfaction == 'y')  /*if-else narration*/
					{
                        for (i = 0; i < ROWS; ++i)  /*for loop*/
						{
                            for (j = 0; j < COLS; ++j)
							 {
                                if (tempSeating[i][j] == '@')
								 {
                                    seating[i][j] = '*';
                                }
                            }
                        }
                    }
                } else {
                    printf("沒有找到符合您要求的可用座位。\n");
                }
                system("cls");
                break;	
					}	
				case'c':  /*If you choose c*/
				{
				system("cls");
                menuReservation(seating);  /*Book a seat manually*/
                system("cls");
                break;	
					}
				case'd':  /*If you choose d*/
				{
			    system("cls");
                handleoptionD();  /*Dealing with option D*/
                system("cls");
                break;
                
                default:  /*If it is other characters*/
                	 printf("無效選項。 再試一次。\n");
					}	
				
		}
	}	 
	return 0; 
}
	/*這次的作業對我來說有相當大的難度，甚至最後的執行結果卡在輸入密碼完就動不了了*/
	/*我也問了我同學和朋友，但最後主選單還是無法跑出來*/
	/*這次的作業是我花費最多時間的，也盡力了，可惜最後沒有得到滿意的結果*/
	/*這次運用了大量的for迴圈、if-else語法、while敘述以及switch-case語法，希望透過這次的練習之後能對這些程式語法更加熟悉。*/ 
