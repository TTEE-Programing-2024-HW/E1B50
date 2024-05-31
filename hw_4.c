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
    printf("�ǥ͸�Ʀp�U�G\n");
    for (int i = 0; i < n; i++) {
        float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("�m�W�G%s, �Ǹ��G%d, �ƾǦ��Z�G%d, ���z���Z�G%d, �^�妨�Z�G%d, �������Z�G%.1f\n",
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
        printf("�п�J�K�X: ");
        scanf("%d", &password);
        if (password == 2024) {
            printf("�K�X���T\n");
            break;
        } else {
            printf("���~,�Э��s��J\n");
            if (i == 2) {
                return 0;
            }
        }
    }
    system("pause");
    clearScreen();

    char choice;
    int n = 0;
    Student students[10]; // ���]�̦h�i�s�x 10 ��ǥ�

    while (1) {
        clearScreen();
        displayMenu();
        printf("�п�J�ﶵ�G");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                clearScreen();
                printf("�п�J�ǥͼƶq�]5~10��^�G");
                while (scanf("%d", &n) != 1 || n <5 || n >10) {
                printf("��J���~�A�п�J�@�Ӥ��� 5 �� 10 ��������ơG");
                while (getchar() != '\n'); 
                }

                for (int i = 0; i < n; i++) {
                    printf("��J�� %d �Ӿǥͪ���ơG\n", i + 1);

                    printf("�m�W�G");
                    scanf("%s", students[i].name);

                    printf("�Ǹ��]6 ���ơ^�G");
                    while (scanf("%d", &students[i].id) != 1 || students[i].id <100000 || students[i].id >999999) {
                    printf("��J���~�A�п�J�@�� 6 ���ƪ��Ǹ��G");
                    while (getchar() != '\n'); 
                    }

                    printf("�ƾǦ��Z�]0~100�^�G");
                    while (scanf("%d", &students[i].math) != 1 || students[i].math <0 || students[i].math >100) {
                    printf("��J���~�A�п�J 0 �� 100 �������ƾǦ��Z�G");
                    while (getchar() != '\n'); 
                    }

                    printf("���z���Z�]0~100�^�G");
                    while (scanf("%d", &students[i].physics) != 1 || students[i].physics <0 || students[i].physics >100) {
                    printf("��J���~�A�п�J 0 �� 100 ���������z���Z�G");
                    while (getchar() != '\n'); 
                    }

                    printf("�^�妨�Z�]0~100�^�G");
                    while (scanf("%d", &students[i].english) != 1 || students[i].english <0 || students[i].english >100) {
                    printf("��J���~�A�п�J 0 �� 100 �������^�妨�Z�G");
                    while (getchar() != '\n');
                    }
                }

                clearScreen();
                printf("�Ҧ��ǥ͸�Ƥw��J�����A�^��D���C\n");
                system("pause");
                break;

            case 'b':
                clearScreen();
                if (n > 0) {
                    displayStudents(students, n);
                } else {
                    printf("�S���ǥ͸�ƥi��ܡC\n");
                }
                printf("�����N��^��D���...");
                getchar();
                getchar();
                clearScreen();
                break;


             default:
                printf("�L�Ī��ﶵ�A�Э��s��J�C\n");
                break;
        }
    }

    return 0;
}