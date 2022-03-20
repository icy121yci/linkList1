#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>



int main(){
	int cho;
	int flag;
	LinkedList L=NULL;
	int flag_2=1;
	while(flag_2){

		printf("------0.创建空表添值---\n");
		printf("------1.奇数偶数对换---\n");//
		printf("------2.插入元素------\n");
		printf("------3.删除元素------\n");
		printf("------4.遍历链表------\n");
		printf("------5.查找元素------\n");
		printf("------6.逆转整表------\n");//
		printf("------7.判断成环------\n");//
		printf("------8.获得中间结点--\n");//
		printf("------9.整表删除------\n");
		printf("------10.退出系统------\n");
		printf("请选择:" );
		scanf("%d",&cho);
		switch(cho){
	
			case 0:
				InitList(&L);
				printf("请问您创建的列表有几个数据？\n");
				scanf("%d",&flag);
				buildList(&L,flag);				
				break;
			case 1:
				printf("此功能未开发，敬请期待双向链表的实现！\n") ;
				break;
			case 2:
				printf("您希望在第几位数的后面插入呢？\n");
				scanf("%d",&flag);
				InsertList(flag, L);
				break;
			case 3:
				printf ("您希望删除第几位数呢？\n");
				scanf("%d",&flag);
				DeleteList(flag, L);
				break;
			case 4:
				TraverseList(L);
				break;
			case 5:
				printf ("您希望查找什么元素呢？\n");
				scanf("%d",&flag) ;
				SearchList(L, flag);
				break;
			case 6:
				printf("此功能未开发，敬请期待双向链表的实现！\n") ;
				break;
			case 7:
				printf("此功能未开发，敬请期待双向链表的实现！\n") ;
				break;	 
			case 8:
				printf("此功能未开发，敬请期待双向链表的实现！\n") ;
				break;	 
			case 9:
				DestroyList(&L);
				break;
			case 10:
				flag_2=0;
				break;
			default :printf("请输入0-10的数字\n");
		}
	}
	return 0;
}

