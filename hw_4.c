#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*定義學生結構*/ 
typedef struct {
    char name[50];  /*學生姓名*/ 
    int id;         /*學生學號*/ 
    int math;       /*數學成績*/ 
    int physics;    /*物理成績*/ 
    int english;    /*英文成績*/ 
    float average;  /*平均成績*/ 
} Student;

void clearScreen() {  /*清除屏幕函數*/ 
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void displayMenu()   /*顯示主選單函數*/
{    
    printf("-------E1B----[Grade System]------50----\n");
    printf("|  a. Enter student grades       |\n");
    printf("|  b. Display student grades     |\n");
    printf("|  c. Search for student grades  |\n");
    printf("|  d. Grade ranking              |\n");
    printf("|  e. Exit system                |\n");
    printf("--------黃-----------冠----------宸------\n");
}

void displayStudents(Student students[], int n)   /*顯示學生資料函數*/ 
{
    printf("學生資料如下：\n");
    int i;  /*宣告變數*/ 
    for (i = 0; i < n; i++)  /*for-loop*/ 
	{
        printf("姓名：%s, 學號：%d, 數學成績：%d, 物理成績：%d, 英文成績：%d, 平均成績：%.1f\n",
        students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
}

void searchStudent(Student students[], int n)   /*搜尋學生資料函數*/ 
{
    char searchName[50];   /*宣告名字字數*/ 
    int found = 0;         /*宣告變數*/ 
    int i;                 /*宣告變數*/ 

    printf("請輸入要搜尋的學生姓名：");
    scanf("%s", searchName);  /*掃描學生名字*/ 

    for (i = 0; i < n; i++) {   
        if (strcmp(students[i].name, searchName) == 0) {  /*如果有此學生資料則顯示出來*/ 
            printf("姓名：%s, 學號：%d, 數學成績：%d, 物理成績：%d, 英文成績：%d, 平均成績：%.1f\n",
            students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;  /*跳出此迴圈，回到主選單*/ 
        }
    }

    if (!found)  /*如果沒有找到學生資料則印出資料不存在*/ 
	{
        printf("資料不存在。\n");
    }

    printf("按任意鍵回到主選單...");
    getchar();  /*等待用戶按下任意鍵*/ 
    getchar();  /* 讀取額外的換行符*/ 
}

void rankStudents(Student students[], int n)  /*排名學生函數*/ 
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {  /*比較學生成績，並由高到低去排名*/ 
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("學生排名如下：\n");
    for (i = 0; i < n; i++) {
        printf("姓名：%s, 學號：%d, 平均成績：%.1f\n",
        students[i].name, students[i].id, students[i].average);
    }

    printf("按任意鍵回到主選單...");
    getchar();   /*等待用戶按下任意鍵*/
    getchar();   /* 讀取額外的換行符*/
}

void displayWelcomeScreen() {   /*顯示個人風格畫面函數*/ 
    puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");
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
    puts("UUU                                                                                   AAA");
    puts("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
    puts("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
    system("pause"); /*暫停程序*/ 
    clearScreen();   /*清除屏幕*/ 
}

int main() {
    int password, i;   

    displayWelcomeScreen();  /*顯示個人風格畫面*/ 

    for (i = 0; i < 3; i++) {
        printf("請輸入密碼: ");
        scanf("%d", &password);
        if (password == 2024) {   /*若密碼正確*/ 
            printf("密碼正確\n");   
            break;
        } else {      /*若密碼不正確*/ 
            printf("錯誤,請重新輸入\n");
            if (i == 2) {
                return 0; /*輸入超過三次錯誤，就結束程式*/ 
            }
        }
    }
    system("pause");  /*暫停程序*/ 
    clearScreen();    /*清除屏幕*/ 

    char choice;     /*宣告選項*/ 
    int n = 0;      /*學生數量*/ 
    Student students[10];    /*學生數組*/ 

    while (1) {    /*while迴圈循環*/ 
        clearScreen();  /*清除屏幕*/ 
        displayMenu();  /*顯示主選單*/ 
        printf("請輸入選項：");
        scanf(" %c", &choice);  /*掃描選項*/ 

        switch (choice) {   /*switch-case 語法*/ 
            case 'a':
                clearScreen();  /*清除屏幕*/ 
                printf("請輸入學生數量（5~10）：");
                while (scanf("%d", &n) != 1 || n < 5 || n > 10) {  /*若學生數量小於5或大於10*/ 
                printf("輸入錯誤，請輸入一個介於 5 到 10 之間的整數：");  /*輸入錯誤*/ 
                while (getchar() != '\n');  /*清空輸入緩衝區*/ 
                }

                for (i = 0; i < n; i++) {
                    printf("輸入第 %d 個學生的資料：\n", i + 1);

                    printf("姓名：");
                    scanf("%s", students[i].name);

                    printf("學號（6 位整數）：");
                    while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) {  /*若學號小於100000或大於999999*/ 
                    printf("輸入錯誤，請輸入一個 6 位整數的學號：");    /*輸入錯誤*/ 
                    while (getchar() != '\n');   /*清空輸入緩衝區*/
                    }

                    printf("數學成績（0~100）：");
                    while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) {  /*若數學成績小於0或大於100*/ 
                    printf("輸入錯誤，請輸入 0 到 100 之間的數學成績：");  /*輸入錯誤*/ 
                    while (getchar() != '\n');   /*清空輸入緩衝區*/
                    }

                    printf("物理成績（0~100）：");
                    while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) { /*若物理成績小於0或大於100*/ 
                    printf("輸入錯誤，請輸入 0 到 100 之間的物理成績：");  /*輸入錯誤*/ 
                    while (getchar() != '\n');  /*清空輸入緩衝區*/  
                    }

                    printf("英文成績（0~100）：");
                    while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) { /*若英文成績小於0或大於100*/ 
                    printf("輸入錯誤，請輸入 0 到 100 之間的英文成績：");  /*輸入錯誤*/ 
                    while (getchar() != '\n');  /*清空輸入緩衝區*/
                    }

                    students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0; /*計算平均成績*/ 
                }

                clearScreen();  /*清除屏幕*/ 
                printf("所有學生資料已輸入完畢，回到主選單。\n");
                system("pause"); /*暫停程序*/ 
                break;  /*跳出選項a，回到主選單*/ 

            case 'b':
                clearScreen();   /*清除屏幕*/ 
                if (n > 0) {
                    displayStudents(students, n);   /*顯示學生資料*/ 
                } else {
                    printf("沒有學生資料可顯示。\n");
                }
                printf("按任意鍵回到主選單...");
                getchar();   /*等待用戶按下任意鍵*/
                getchar();   /* 讀取額外的換行符*/ 
                clearScreen();
                break;  /*跳出選項b，回到主選單*/ 

            case 'c':
                clearScreen();  /*清除屏幕*/ 
                if (n > 0) {
                    searchStudent(students, n);  /*顯示搜尋學生的資料*/ 
                } else {
                    printf("沒有學生資料可搜尋。\n");
                    printf("按任意鍵回到主選單...");
                    getchar();  /*等待用戶按下任意鍵*/ 
                    getchar();  /* 讀取額外的換行符*/ 
                }
                clearScreen();
                break;  /*跳出選項c，回到主選單*/ 

            case 'd':
                clearScreen();
                if (n > 0) {
                    rankStudents(students, n);  /*顯示學生排名*/ 
                } else {
                    printf("沒有學生資料可排名。\n");
                    printf("按任意鍵回到主選單...");
                    getchar();   /*等待用戶按下任意鍵*/
                    getchar();   /* 讀取額外的換行符*/ 
                }
                clearScreen();
                break;  /*跳出選項d，回到主選單*/ 

            case 'e':
                while (1) {
                    clearScreen(); /*清除屏幕*/ 
                    printf("確定離開？ (y/n): ");
                    char word;
                    scanf(" %c", &word);
                    if (word == 'y' || word == 'Y') {  /*若word=y或Y*/ 
                    	
                        return 0; /*結束程式*/ 
                        
                    } else if (word == 'n' || word == 'N') {  /*若word=n或N*/
                    	
                        break;   /*跳出選項e，回到主選單*/ 
                        
                    } else {  /*若都不是*/ 
                    	
                        printf("無效的輸入，請重新輸入。\n");
                        
                    }
                }
                break; /*跳出while迴圈*/ 

            default:  /*若選項不為a，b，c，d，e*/ 
                    printf("無效的選項，請重新輸入。\n");
                    break; /*跳出switch*/ 
        }
    }

    return 0;  /*結束程式*/ 
}

/*這次的作業我用了好幾個小時才搞定，但相較於上次我覺得我有進步了，起碼看到題目後我能夠大概知道要用什麼方法去做。*/
/*這次我主要是用 while語法 、for迴圈、 if-else語法以及switch-case 來完成的。*/
/*這次遇到最大的困難是寫d選項的時候，一開始成績無法從高排到低，而且平均成績都是顯示0，上網查詢後才解決了這個問題。*/
/*經過這四次的程式作業後，我對程式的認識從零到現在可以自己打出來，也算是一大進步了。*/ 
