#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	/*1. �ù��W�X�{�ӤH���檺�e��(�ܤ�20��)�A�ín�D�ϥΪ̿�J4�ӼƦr���K�X(�K�X�ȹw�]��2024)�C
	�Y��J���T�A�h�i�J�B�J2�C�Y�s����T���A�h���ĵ�i�T���õ����{���C�Цb�e���W��ܱK�X�ȥH�K�ˬd�C*/ 
	puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");  /*�L�X�a���ӤH���檺�e��*/ 
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
	system("PAUSE");  /*�Ȱ��e�� ���ϥΪ̫����N��*/ 
	system("CLS");  /*�M���ù�*/ 
	 
	int password,i;
	for(i=0;i<=3;i++)
	{
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2024)
		{
			printf("�K�X���T\n");
			break;
		}
		else
		{
			printf("���~,�Э��s��J\n");
			if(i==2){
				printf("���~�L�h,�����{��\n");
				return 0;
			}
		}
	}
	system("pause");
	system("CLS");
	} 
