#include "linkedList.h"
#include <stdio.h> 
#include <stdlib.h>




//创建空表
void InitList(LinkedList *L){
		*L=(LinkedList)malloc(sizeof(LNode));
	if (!(*L))
		exit (1);
	(*L)->next=NULL;
		
}
//创建表 用尾插法 
Status buildList(LinkedList *L,int num) {
	
	int i;
//	int j; 
	LinkedList p,r;
	r=*L;//r为尾部指针 
	for (i=1;i<=num;i++){
		p=(LinkedList)malloc(sizeof(LNode));
		//p为新结点指针 
		printf("请输入第%d个数据:\n",i) ;
		scanf("%d",&(p->data) );
	//	p->data=j;&j
		r->next =p;
		r=p;		
	
	}
	r->next=NULL;
	return SUCCESS;  
} 
//插入 
Status InsertList(int num, LinkedList L){
	LinkedList p,q;
	p=L;
	int i;
//	int j;
		
	for (i=0;i<num;i++){
		p=p->next ;//找到插入的结点 
		if (!p||i>num){
			printf("没有这个节点\n");
			return ERROR;
		} 
	}
	q=(LinkedList)malloc(sizeof(LNode));//q为新节点指针 
	printf("请输入要插入的数：\n");
	scanf("%d",&(q->data) );
//	q->data =j;
	q->next =p->next ;
	p->next =q;
	
	return SUCCESS; 
}
//删除 
Status DeleteList(int num, LinkedList L){
	int i;
	LinkedList p,q;
	p=L;
	
	for(i=0;i<num-1;i++){
		p=p->next ;	//找到删除的结点的前一个 
		if (!p||i>num||num<0){
			printf("没有这个节点\n");
			return ERROR;
		} 	
	} 
	q=p->next;//q为要删除的结点
	printf("成功删除了第%d位的数据：%d\n",num,q->data );
	p->next =q->next ;
	free(q);
	
	return SUCCESS; 
}
//遍历
void TraverseList(LinkedList L){
	LinkedList p,q;
	p=L;
	if (L=NULL){
	
		printf("空链表，没有数据\n");
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
//查找
Status SearchList(LinkedList L, ElemType e){
	if(L==NULL){
		printf("错误！（空链表，没有数据）\n");
		return ERROR;
	}
	while(L){
		L=L->next ;
		if(L->data==e) {
			printf("该元素存在！\n") ;
			return SUCCESS; 
		}
	}
	printf("该元素不存在！\n");		
	return SUCCESS; 
} 
//整表删除
void DestroyList(LinkedList *L){
	LinkedList p; 
	
	if(L==NULL){
		printf("错误！（空链表，没有数据）\n");
		return;
	}
	
	while ((*L)){
		p=*L;
		*L=(*L)->next ;
		free(p);
	}
} 
