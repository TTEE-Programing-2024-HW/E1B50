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
	
	/*2.�M���ù��A�ù��X�{�D���A�p�U�ҥ�:(�i�ۦ�]�p�ӤH���檺���) */
	while(1){
	puts("----E----1----B----50----");
	puts(" |  a.+-*�e�X�����T���� *-+ | ");
	puts(" |  b.+-*��ܭ��k��  *-+ | ");
	puts(" |  c.+-*����           *-+ | ");
	puts(" --G--U--A--N--C--H--E--N--   ");
	
	/*3. �ϥΪ̭Y��J��A���Ρ�a���A�h�M���ù��A�ín�D��J�@�ӡ�a���졥n�����r���C
	���ۮھڿ�J�r����{�@�����T���ΡA�Ҧp��J����c���A�h�X�{�k�ϡC�ϥΪ̫��U������(�i��getch()���)�h�M���ù��A�æ^��D���C
	�Y��J�r�����b��a���ܡ�n���϶��A�ݥX�{ĵ�i�T���ín�D���s��J�C*/
	
	int a,w,i,j,z,n,num,g,h;
	char ch;
	printf("��J�@�Ӧr��:");
	scanf("%c",&a);
	switch(a)
	{
		case'A':
		case'a': 
		
			system("CLS");
			printf("��J�@��a��n���r��:");
			scanf("%c",&w);
			while(w<'a'||w>'n'){
				printf("��J���~,�ЦA��J�@��\n");
				printf("��J�@��a��n���r��:");
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
			printf("��J�@��1��9�����:");
			scanf("%d",&num);
			while(num<1|| num>9){
			printf("��J���~,�ЦA��J�@��\n");
			printf("��J�@��1��9�����:");	
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
				printf("���~\n");
				continue ;
			}
		}
	}
	}
	
	
  
	
