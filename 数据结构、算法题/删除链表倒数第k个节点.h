#pragma once

#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct ListNode
{
	DataType data;
	struct ListNode* next;
}	ListNode;

//��ʼ��
void ListInit(ListNode** ppfirst)
{
	assert(ppfirst != NULL);
	*ppfirst = NULL;
}

//������node
static ListNode* CreateNode(DataType data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	assert(newNode);
	newNode->data = data;
	newNode->next = NULL;

	return newNode;
}

//ͷ��
void ListPushFront(ListNode** ppfirst, DataType data)
{
	assert(ppfirst != NULL);

	ListNode* newNode = CreateNode(data);

	newNode->next = *ppfirst;
	*ppfirst = newNode;
}

//ɾ�������е�����k�����
void ListPopKBack(ListNode** ppfirst, DataType k)
{
	//ǰ��ָ�뷨
	ListNode* front = *ppfirst;
	ListNode* back = *ppfirst;

	for (DataType i = 0; i < k; i++)
	{
		front = front->next;
	}

	if (front == NULL)	//������ֻ��k����㣬ͷɾ
	{
		ListNode* del = *ppfirst;
		*ppfirst = del->next;

		free(del);
		return;
	}

	while (front->next != NULL)
	{
		front = front->next;
		back = back->next;		//backΪҪɾ������ǰһ�����
	}

	ListNode* del = back->next;
	back->next = del->next;
	free(del);
}

//ʹ�ó���
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