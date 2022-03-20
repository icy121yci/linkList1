#include "linkedList.h"
#include <stdio.h> 
#include <stdlib.h>




//�����ձ�
void InitList(LinkedList *L){
		*L=(LinkedList)malloc(sizeof(LNode));
	if (!(*L))
		exit (1);
	(*L)->next=NULL;
		
}
//������ ��β�巨 
Status buildList(LinkedList *L,int num) {
	
	int i;
	int j; 
	LinkedList p,r;
	r=*L;//rΪβ��ָ�� 
	for (i=1;i<=num;i++){
		p=(LinkedList)malloc(sizeof(LNode));
		//pΪ�½��ָ�� 
		printf("�������%d������:\n",i) ;
		scanf("%d",&j );
		p->data=j;
		r->next =p;
		r=p;		
	
	}
	r->next=NULL;
	return SUCCESS;  
} 
//���� 
Status InsertList(int num, LinkedList L){
	LinkedList p,q;
	p=L;
	int i;
	int j;
		
	for (i=0;i<num;i++){
		p=p->next ;//�ҵ�����Ľ�� 
		if (!p||i>num){
			printf("û������ڵ�\n");
			return ERROR;
		} 
	}
	q=(LinkedList)malloc(sizeof(LNode));//qΪ�½ڵ�ָ�� 
	printf("������Ҫ���������\n");
	scanf("%d",&j );
	q->data =j;
	q->next =p->next ;
	p->next =q;
	
	return SUCCESS; 
}
//ɾ�� 
Status DeleteList(int num, LinkedList L){
	int i;
	LinkedList p,q;
	p=L;
	
	for(i=0;i<num-1;i++){
		p=p->next ;	//�ҵ�ɾ���Ľ���ǰһ�� 
		if (!p||i>num||num<0){
			printf("û������ڵ�\n");
			return ERROR;
		} 	
	} 
	q=p->next;//qΪҪɾ���Ľ��
	printf("�ɹ�ɾ���˵�%dλ�����ݣ�%d\n",num,q->data );
	p->next =q->next ;
	free(q);
	
	return SUCCESS; 
}
//����
void TraverseList(LinkedList L){
	LinkedList p,q;
	p=L;
	if (L=NULL){
	
		printf("������û������\n");
		return;
		}
	while(p){
		p=p->next;
		if(p==NULL)
			break;
		printf("%d->",p->data );
		
		
	}
	printf("NULL\n");

} 
//����
Status SearchList(LinkedList L, ElemType e){
	if(L==NULL){
		printf("���󣡣�������û�����ݣ�\n");
		return ERROR;
	}
	while(L){
		L=L->next ;
		if(L->data==e) {
			printf("��Ԫ�ش��ڣ�\n") ;
			return SUCCESS; 
		}
	}
	printf("��Ԫ�ز����ڣ�\n");		
	return SUCCESS; 
} 
//����ɾ��
void DestroyList(LinkedList *L){
	LinkedList p; 
	
	if(L==NULL){
		printf("���󣡣�������û�����ݣ�\n");
		return;
	}
	
	while ((*L)){
		p=*L;
		*L=(*L)->next ;
		free(p);
	}
} 
