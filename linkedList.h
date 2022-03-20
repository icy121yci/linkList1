/***************************************************************************************
 *	File Name				:	linkedList.h
 *	CopyRight				:	2020 QG Studio
 *	SYSTEM					:   win10
 *	Create Data				:	2020.3.28
 *
 *
 *--------------------------------Revision History--------------------------------------
 *	No	version		Data			Revised By			Item			Description
 *
 *
 ***************************************************************************************/

 /**************************************************************
*	Multi-Include-Prevent Section
**************************************************************/
#ifndef LINKEDLIST_H 
#define LINKEDLIST_H 

/**************************************************************
*	Macro Define Section
**************************************************************/

#define OVERFLOW -1

/**************************************************************
*	Struct Define Section
**************************************************************/

// define element type
typedef int ElemType;

// define struct of linked list
typedef struct LNode {
	ElemType data;
  	struct LNode *next;
}LNode, *LinkedList;

// define Status
typedef enum Status {
	ERROR,
	SUCCESS
}Status;


/**************************************************************
*	Prototype Declare Section
**************************************************************/
/**
 *  @name        : void buildList(LinkedList *L,int num) ;
 *	@description :  a.创建表-
 *	@param		 : L(the head node) num (the number of lnode)
 *	@return		 : void
 *  @notice      : None
 */
Status buildList(LinkedList *L,int num) ;

/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value a.创建空表-
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
void InitList(LinkedList *L);

/**
 *  @name        : void DestroyList(LinkedList *L)
 *	@description : destroy a linked list, free all the nodes j.整表删除
 *	@param		 : L(the head node)
 *	@return		 : None
 *  @notice      : None
 */
void DestroyList(LinkedList *L);

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node num c.插入元素
 *	@param		 : num,L
 *	@return		 : Status
 *  @notice      : None
 */
Status InsertList(int num, LinkedList L);

/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node num  d.删除元素
 *	@param		 : num, L
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(int num, LinkedList L);

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list -e.遍历链表
 *	@param		 : L(the head node), 
 *	@return		 : None
 *  @notice      : None
 */
void TraverseList(LinkedList L);

/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e f.查找元素
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
Status SearchList(LinkedList L, ElemType e);

/**
 *  @name        : Status ReverseList(LinkedList *L)
 *	@description : reverse the linked list g.逆转整表-
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
//Status ReverseList(LinkedList *L);

/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped h.判断成环
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
//Status IsLoopList(LinkedList L);

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L) 奇数偶数对换 
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish
 */
//LNode* ReverseEvenList(LinkedList *L);

/**
 *  @name        : LNode* FindMidNode(LinkedList *L) 
 *	@description : find the middle node in the linked listi.i.获得中间结点
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish
 */
//LNode* FindMidNode(LinkedList *L);

 /**************************************************************
*	End-Multi-Include-Prevent Section
**************************************************************/
#endif
