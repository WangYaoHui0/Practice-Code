#pragma once

#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct ListNode
{
	DataType data;
	struct ListNode* next;
}	ListNode;

//初始化
void ListInit(ListNode** ppfirst)
{
	assert(ppfirst != NULL);
	*ppfirst = NULL;
}

//创建新node
static ListNode* CreateNode(DataType data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	assert(newNode);
	newNode->data = data;
	newNode->next = NULL;

	return newNode;
}

//头插
void ListPushFront(ListNode** ppfirst, DataType data)
{
	assert(ppfirst != NULL);

	ListNode* newNode = CreateNode(data);

	newNode->next = *ppfirst;
	*ppfirst = newNode;
}

//删除链表中倒数第k个结点
void ListPopKBack(ListNode** ppfirst, DataType k)
{
	//前后指针法
	ListNode* front = *ppfirst;
	ListNode* back = *ppfirst;

	for (DataType i = 0; i < k; i++)
	{
		front = front->next;
	}

	if (front == NULL)	//链表中只有k个结点，头删
	{
		ListNode* del = *ppfirst;
		*ppfirst = del->next;

		free(del);
		return;
	}

	while (front->next != NULL)
	{
		front = front->next;
		back = back->next;		//back为要删除结点的前一个结点
	}

	ListNode* del = back->next;
	back->next = del->next;
	free(del);
}

//使用场景
void TestPopKBack()
{
	ListNode* first;
	ListInit(&first);

	ListPushFront(&first, 1);
	ListPushFront(&first, 2);
	ListPushFront(&first, 3);
	ListPushFront(&first, 4);
	ListPushFront(&first, 5);
	ListPushFront(&first, 6);

	//ListPopKBack(&first, 3);
	ListPopKBack(&first, 6);
}