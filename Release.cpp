#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>



int main(){
	int cho;
	int flag;
	LinkedList *L=NULL;
	int flag_2=1;
	while(flag_2){

		printf("------0.�����ձ���ֵ---\n");
		printf("------1.����ż���Ի�---\n");//
		printf("------2.����Ԫ��------\n");
		printf("------3.ɾ��Ԫ��------\n");
		printf("------4.��������------\n");
		printf("------5.����Ԫ��------\n");
		printf("------6.��ת����------\n");//
		printf("------7.�жϳɻ�------\n");//
		printf("------8.����м���--\n");//
		printf("------9.����ɾ��------\n");
		printf("------10.�˳�ϵͳ------\n");
		printf("��ѡ��:" );
		scanf("%d",&cho);
		switch(cho){
	
			case 0:
				InitList(L);
				printf("�������������б��м������ݣ�\n");
				scanf("%d",&flag);
				buildList(L,flag);				
				break;
			case 1:
				printf("�˹���δ�����������ڴ�˫�������ʵ�֣�\n") ;
				break;
			case 2:
				printf("��ϣ���ڵڼ�λ���ĺ�������أ�\n");
				scanf("%d",&flag);
				flag=InsertList(flag, L);
				printf("%d",flag);
				break;
			case 3:
				printf ("��ϣ��ɾ���ڼ�λ���أ�\n");
				scanf("%d",&flag);
				flag=DeleteList(flag, L);
				printf("%d",flag);
				break;
			case 4:
				TraverseList(*L);
				break;
			case 5:
				printf ("��ϣ������ʲôԪ���أ�\n");
				scanf("%d",&flag) ;
				flag=SearchList(*L, flag);
				printf("%d",flag);
				break;
			case 6:
				printf("�˹���δ�����������ڴ�˫�������ʵ�֣�\n") ;
				break;
			case 7:
				printf("�˹���δ�����������ڴ�˫�������ʵ�֣�\n") ;
				break;	 
			case 8:
				printf("�˹���δ�����������ڴ�˫�������ʵ�֣�\n") ;
				break;	 
			case 9:
				DestroyList(L);
				break;
			case 10:
				flag_2=0;
				break;
			default :printf("������0-10������\n");
		}
	}
	return 0;
}

