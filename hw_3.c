#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 #include <ctype.h>
#include <string.h>
#define ROWS 9
#define COLS 9 

void displayHeader() 
{
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
}
	 
	 void generateRandomReservations(char seating[ROWS][COLS])
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
	 
	 void printSeating(char seating[ROWS][COLS])
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
	 
	 int suggestSeating (char seating[ROWS][COLS],int s)
	 {
	 	int i,j,h;
	 	for(i=0;i<ROWS;i++)
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
			if(available)	 
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
				return 1;
				 }
			 }
		 }
	 }
	 return 0;
}

void manualReservation(char seating[ROWS][COLS]) 
    {
    char input[10];
    while (1) 
	{
        printf(" 輸入座位 (1-2) 或「完成」到結束：");
        scanf("%s", input);
        
        if (strcmp(input, "完成") == 0) 
		break;
        if (strlen(input) != 3 || input[1] != '-' || !isdigit(input[0]) || !isdigit(input[2]))
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
        printSeating(seating);
    }
    
    printf("Are you satisfied(你滿意嗎)?(y/n):");
    char character;
    scanf("%c",&character);
    if(character=='n')
    {
    	int i,j;
    	for(i=0;i<ROWS;i++)
    	{
    	for(j=0;j<COLS;j++)
    		{
    	if(seating[i][j]=='@')
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

void handleoptionD()
 {
    while (1) 
	{
        printf("Continue? (y/n): ");
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
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
}

int main(void)
{
	displayHeader();
	system("pause");
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
			if(i==2){
				printf("錯誤過多,結束程式\n");
				return 0;
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
	generateRandomReservations(seating);
	
	while(1)
	{
		printf("----E----1----B----50----");
		puts("-----[BookingSystem]-----");
		puts("|  a. Available seats   |");
		puts("|  b. Arrange for you   |");
		puts("|  c. Choose by yourself|");
		puts("|  d. Exit              |");
		puts("--G--U--A--N--C--H--E--N ");
		fflush(stdin);
	    char choose;
	    scanf("%c",&choose);
	    
	    switch(choose)
	    {
	    	case'a':
	    		{
	    		system("cls");
                printSeating(seating);
                printf("Press any key to return to menu...");
                getchar(); getchar();
                system("cls");
                break;
			}
			case'b':
				{
				 system("cls");
                int s;
                printf("How many seats do you need? (1-4): ");
                scanf("%d", &s);
                if (s < 1 || s > 4) {
                    printf("Invalid number of seats. Try again.\n");
                    break;
                }
                char tempSeating[ROWS][COLS];
                for (i = 0; i < ROWS; ++i) {
                    for (j = 0; j < COLS; ++j) {
                        tempSeating[i][j] = seating[i][j];
                    }
                }
                if (suggestSeating(tempSeating, s)) {
                    printSeating(tempSeating);
                    printf("Are you satisfied ? (y/n): ");
                    char satisfaction;
                    scanf(" %c", &satisfaction);
                    if (satisfaction == 'y') {
                        for (i = 0; i < ROWS; ++i) {
                            for (j = 0; j < COLS; ++j) {
                                if (tempSeating[i][j] == '@') {
                                    seating[i][j] = '*';
                                }
                            }
                        }
                    }
                } else {
                    printf("No available seats found for your request.\n");
                }
                system("cls");
                break;	
					}	
				case'c':
				{
				system("cls");
                manualReservation(seating);
                system("cls");
                break;	
					}
				case'd':
				{
			    system("cls");
                handleoptionD();
                system("cls");
                break;
                
                default:
                	 printf("Invalid option. Try again.\n");
					}	
				
		}
	}	 
	return 0; 
}
	
