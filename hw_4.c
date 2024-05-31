#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int id;
    int math;
    int physics;
    int english;
} Student;

void clearScreen() {
    
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void displayMenu() {
    printf("------------[Grade System]----------\n");
    printf("|  a. Enter student grades       |\n");
    printf("|  b. Display student grades     |\n");
    printf("|  c. Search for student grades  |\n");
    printf("|  d. Grade ranking              |\n");
    printf("|  e. Exit system                |\n");
    printf("------------------------------------\n");
}

void displayStudents(Student students[], int n) {
    printf("學生資料如下：\n");
    for (int i = 0; i < n; i++) {
        float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("姓名：%s, 學號：%d, 數學成績：%d, 物理成績：%d, 英文成績：%d, 平均成績：%.1f\n",
               students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
    }
}

void displayWelcomeScreen() {
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
    system("pause");
    clearScreen();
}

int main() {
    int password, i;

    displayWelcomeScreen();
    
    for (i = 0; i < 3; i++) {
        printf("請輸入密碼: ");
        scanf("%d", &password);
        if (password == 2024) {
            printf("密碼正確\n");
            break;
        } else {
            printf("錯誤,請重新輸入\n");
            if (i == 2) {
                return 0;
            }
        }
    }
    system("pause");
    clearScreen();

    char choice;
    int n = 0;
    Student students[10]; // 假設最多可存儲 10 位學生

    while (1) {
        clearScreen();
        displayMenu();
        printf("請輸入選項：");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                clearScreen();
                printf("請輸入學生數量（5~10位）：");
                while (scanf("%d", &n) != 1 || n <5 || n >10) {
                printf("輸入錯誤，請輸入一個介於 5 到 10 之間的整數：");
                while (getchar() != '\n'); 
                }

                for (int i = 0; i < n; i++) {
                    printf("輸入第 %d 個學生的資料：\n", i + 1);

                    printf("姓名：");
                    scanf("%s", students[i].name);

                    printf("學號（6 位整數）：");
                    while (scanf("%d", &students[i].id) != 1 || students[i].id <100000 || students[i].id >999999) {
                    printf("輸入錯誤，請輸入一個 6 位整數的學號：");
                    while (getchar() != '\n'); 
                    }

                    printf("數學成績（0~100）：");
                    while (scanf("%d", &students[i].math) != 1 || students[i].math <0 || students[i].math >100) {
                    printf("輸入錯誤，請輸入 0 到 100 之間的數學成績：");
                    while (getchar() != '\n'); 
                    }

                    printf("物理成績（0~100）：");
                    while (scanf("%d", &students[i].physics) != 1 || students[i].physics <0 || students[i].physics >100) {
                    printf("輸入錯誤，請輸入 0 到 100 之間的物理成績：");
                    while (getchar() != '\n'); 
                    }

                    printf("英文成績（0~100）：");
                    while (scanf("%d", &students[i].english) != 1 || students[i].english <0 || students[i].english >100) {
                    printf("輸入錯誤，請輸入 0 到 100 之間的英文成績：");
                    while (getchar() != '\n');
                    }
                }

                clearScreen();
                printf("所有學生資料已輸入完畢，回到主選單。\n");
                system("pause");
                break;

            case 'b':
                clearScreen();
                if (n > 0) {
                    displayStudents(students, n);
                } else {
                    printf("沒有學生資料可顯示。\n");
                }
                printf("按任意鍵回到主選單...");
                getchar();
                getchar();
                clearScreen();
                break;


             default:
                printf("無效的選項，請重新輸入。\n");
                break;
        }
    }

    return 0;
}
