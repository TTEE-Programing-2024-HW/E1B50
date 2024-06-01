#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*�w�q�ǥ͵��c*/ 
typedef struct {
    char name[50];  /*�ǥͩm�W*/ 
    int id;         /*�ǥ;Ǹ�*/ 
    int math;       /*�ƾǦ��Z*/ 
    int physics;    /*���z���Z*/ 
    int english;    /*�^�妨�Z*/ 
    float average;  /*�������Z*/ 
} Student;

void clearScreen() {  /*�M���̹����*/ 
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void displayMenu()   /*��ܥD�����*/
{    
    printf("-------E1B----[Grade System]------50----\n");
    printf("|  a. Enter student grades       |\n");
    printf("|  b. Display student grades     |\n");
    printf("|  c. Search for student grades  |\n");
    printf("|  d. Grade ranking              |\n");
    printf("|  e. Exit system                |\n");
    printf("--------��-----------�a----------�f------\n");
}

void displayStudents(Student students[], int n)   /*��ܾǥ͸�ƨ��*/ 
{
    printf("�ǥ͸�Ʀp�U�G\n");
    int i;  /*�ŧi�ܼ�*/ 
    for (i = 0; i < n; i++)  /*for-loop*/ 
	{
        printf("�m�W�G%s, �Ǹ��G%d, �ƾǦ��Z�G%d, ���z���Z�G%d, �^�妨�Z�G%d, �������Z�G%.1f\n",
        students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
}

void searchStudent(Student students[], int n)   /*�j�M�ǥ͸�ƨ��*/ 
{
    char searchName[50];   /*�ŧi�W�r�r��*/ 
    int found = 0;         /*�ŧi�ܼ�*/ 
    int i;                 /*�ŧi�ܼ�*/ 

    printf("�п�J�n�j�M���ǥͩm�W�G");
    scanf("%s", searchName);  /*���y�ǥͦW�r*/ 

    for (i = 0; i < n; i++) {   
        if (strcmp(students[i].name, searchName) == 0) {  /*�p�G�����ǥ͸�ƫh��ܥX��*/ 
            printf("�m�W�G%s, �Ǹ��G%d, �ƾǦ��Z�G%d, ���z���Z�G%d, �^�妨�Z�G%d, �������Z�G%.1f\n",
            students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;  /*���X���j��A�^��D���*/ 
        }
    }

    if (!found)  /*�p�G�S�����ǥ͸�ƫh�L�X��Ƥ��s�b*/ 
	{
        printf("��Ƥ��s�b�C\n");
    }

    printf("�����N��^��D���...");
    getchar();  /*���ݥΤ���U���N��*/ 
    getchar();  /* Ū���B�~�������*/ 
}

void rankStudents(Student students[], int n)  /*�ƦW�ǥͨ��*/ 
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {  /*����ǥͦ��Z�A�åѰ���C�h�ƦW*/ 
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("�ǥͱƦW�p�U�G\n");
    for (i = 0; i < n; i++) {
        printf("�m�W�G%s, �Ǹ��G%d, �������Z�G%.1f\n",
        students[i].name, students[i].id, students[i].average);
    }

    printf("�����N��^��D���...");
    getchar();   /*���ݥΤ���U���N��*/
    getchar();   /* Ū���B�~�������*/
}

void displayWelcomeScreen() {   /*��ܭӤH����e�����*/ 
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
    system("pause"); /*�Ȱ��{��*/ 
    clearScreen();   /*�M���̹�*/ 
}

int main() {
    int password, i;   

    displayWelcomeScreen();  /*��ܭӤH����e��*/ 

    for (i = 0; i < 3; i++) {
        printf("�п�J�K�X: ");
        scanf("%d", &password);
        if (password == 2024) {   /*�Y�K�X���T*/ 
            printf("�K�X���T\n");   
            break;
        } else {      /*�Y�K�X�����T*/ 
            printf("���~,�Э��s��J\n");
            if (i == 2) {
                return 0; /*��J�W�L�T�����~�A�N�����{��*/ 
            }
        }
    }
    system("pause");  /*�Ȱ��{��*/ 
    clearScreen();    /*�M���̹�*/ 

    char choice;     /*�ŧi�ﶵ*/ 
    int n = 0;      /*�ǥͼƶq*/ 
    Student students[10];    /*�ǥͼƲ�*/ 

    while (1) {    /*while�j��`��*/ 
        clearScreen();  /*�M���̹�*/ 
        displayMenu();  /*��ܥD���*/ 
        printf("�п�J�ﶵ�G");
        scanf(" %c", &choice);  /*���y�ﶵ*/ 

        switch (choice) {   /*switch-case �y�k*/ 
            case 'a':
                clearScreen();  /*�M���̹�*/ 
                printf("�п�J�ǥͼƶq�]5~10�^�G");
                while (scanf("%d", &n) != 1 || n < 5 || n > 10) {  /*�Y�ǥͼƶq�p��5�Τj��10*/ 
                printf("��J���~�A�п�J�@�Ӥ��� 5 �� 10 ��������ơG");  /*��J���~*/ 
                while (getchar() != '\n');  /*�M�ſ�J�w�İ�*/ 
                }

                for (i = 0; i < n; i++) {
                    printf("��J�� %d �Ӿǥͪ���ơG\n", i + 1);

                    printf("�m�W�G");
                    scanf("%s", students[i].name);

                    printf("�Ǹ��]6 ���ơ^�G");
                    while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) {  /*�Y�Ǹ��p��100000�Τj��999999*/ 
                    printf("��J���~�A�п�J�@�� 6 ���ƪ��Ǹ��G");    /*��J���~*/ 
                    while (getchar() != '\n');   /*�M�ſ�J�w�İ�*/
                    }

                    printf("�ƾǦ��Z�]0~100�^�G");
                    while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) {  /*�Y�ƾǦ��Z�p��0�Τj��100*/ 
                    printf("��J���~�A�п�J 0 �� 100 �������ƾǦ��Z�G");  /*��J���~*/ 
                    while (getchar() != '\n');   /*�M�ſ�J�w�İ�*/
                    }

                    printf("���z���Z�]0~100�^�G");
                    while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) { /*�Y���z���Z�p��0�Τj��100*/ 
                    printf("��J���~�A�п�J 0 �� 100 ���������z���Z�G");  /*��J���~*/ 
                    while (getchar() != '\n');  /*�M�ſ�J�w�İ�*/  
                    }

                    printf("�^�妨�Z�]0~100�^�G");
                    while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) { /*�Y�^�妨�Z�p��0�Τj��100*/ 
                    printf("��J���~�A�п�J 0 �� 100 �������^�妨�Z�G");  /*��J���~*/ 
                    while (getchar() != '\n');  /*�M�ſ�J�w�İ�*/
                    }

                    students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0; /*�p�⥭�����Z*/ 
                }

                clearScreen();  /*�M���̹�*/ 
                printf("�Ҧ��ǥ͸�Ƥw��J�����A�^��D���C\n");
                system("pause"); /*�Ȱ��{��*/ 
                break;  /*���X�ﶵa�A�^��D���*/ 

            case 'b':
                clearScreen();   /*�M���̹�*/ 
                if (n > 0) {
                    displayStudents(students, n);   /*��ܾǥ͸��*/ 
                } else {
                    printf("�S���ǥ͸�ƥi��ܡC\n");
                }
                printf("�����N��^��D���...");
                getchar();   /*���ݥΤ���U���N��*/
                getchar();   /* Ū���B�~�������*/ 
                clearScreen();
                break;  /*���X�ﶵb�A�^��D���*/ 

            case 'c':
                clearScreen();  /*�M���̹�*/ 
                if (n > 0) {
                    searchStudent(students, n);  /*��ܷj�M�ǥͪ����*/ 
                } else {
                    printf("�S���ǥ͸�ƥi�j�M�C\n");
                    printf("�����N��^��D���...");
                    getchar();  /*���ݥΤ���U���N��*/ 
                    getchar();  /* Ū���B�~�������*/ 
                }
                clearScreen();
                break;  /*���X�ﶵc�A�^��D���*/ 

            case 'd':
                clearScreen();
                if (n > 0) {
                    rankStudents(students, n);  /*��ܾǥͱƦW*/ 
                } else {
                    printf("�S���ǥ͸�ƥi�ƦW�C\n");
                    printf("�����N��^��D���...");
                    getchar();   /*���ݥΤ���U���N��*/
                    getchar();   /* Ū���B�~�������*/ 
                }
                clearScreen();
                break;  /*���X�ﶵd�A�^��D���*/ 

            case 'e':
                while (1) {
                    clearScreen(); /*�M���̹�*/ 
                    printf("�T�w���}�H (y/n): ");
                    char word;
                    scanf(" %c", &word);
                    if (word == 'y' || word == 'Y') {  /*�Yword=y��Y*/ 
                    	
                        return 0; /*�����{��*/ 
                        
                    } else if (word == 'n' || word == 'N') {  /*�Yword=n��N*/
                    	
                        break;   /*���X�ﶵe�A�^��D���*/ 
                        
                    } else {  /*�Y�����O*/ 
                    	
                        printf("�L�Ī���J�A�Э��s��J�C\n");
                        
                    }
                }
                break; /*���Xwhile�j��*/ 

            default:  /*�Y�ﶵ����a�Ab�Ac�Ad�Ae*/ 
                    printf("�L�Ī��ﶵ�A�Э��s��J�C\n");
                    break; /*���Xswitch*/ 
        }
    }

    return 0;  /*�����{��*/ 
}

/*�o�����@�~�ڥΤF�n�X�Ӥp�ɤ~�d�w�A���۸���W����ı�o�ڦ��i�B�F�A�_�X�ݨ��D�ث�گ���j�����D�n�Τ����k�h���C*/
/*�o���ڥD�n�O�� while�y�k �Bfor�j��B if-else�y�k�H��switch-case �ӧ������C*/
/*�o���J��̤j���x���O�gd�ﶵ���ɭԡA�@�}�l���Z�L�k�q���ƨ�C�A�ӥB�������Z���O���0�A�W���d�߫�~�ѨM�F�o�Ӱ��D�C*/
/*�g�L�o�|�����{���@�~��A�ڹ�{�����{�ѱq�s��{�b�i�H�ۤv���X�ӡA�]��O�@�j�i�B�F�C*/ 
