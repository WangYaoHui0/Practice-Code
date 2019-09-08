#include <iostream>

using namespace std;

class ListNode
{
public:
	ListNode()
		: _next(nullptr)
	{}

	ListNode(int data)
		: _data(data)
		, _next(nullptr)
	{}

	void ListInit(ListNode** ppfirst)
	{
		*ppfirst = nullptr;
	}

	// ͷ��
	void ListPushFront(ListNode** ppfirst, int data)
	{
		ListNode* newNode = new ListNode(data);

		newNode->_next = *ppfirst;
		*ppfirst = newNode;
	}

	// ɾ�������е�����k���ڵ�
	void ListPopKBack(ListNode** ppfirst, int k)
	{
		ListNode* front = *ppfirst;
		ListNode* back = *ppfirst;

		for (int i = 0; i < k; ++i)
		{
			front = front->_next;
		}

		// ������ֻ��k���ڵ㣬ͷɾ
		if (front == nullptr)
		{
			ListNode* del = *ppfirst;
			*ppfirst = del->_next;

			delete del;
			return;
		}

		while (front->_next != nullptr)
		{
			front = front->_next;
			back = back->_next;
		}

		// backΪҪɾ���ڵ��ǰһ���ڵ�
		ListNode* del = back->_next;
		back->_next = del->_next;

		// ɾ��Ҫ��ɾ���ĵ�����k���ڵ�
		delete del;
	}

private:
	int _data;
	ListNode* _next;
};

int main()
{
	ListNode* first;
	first->ListInit(&first);

	first->ListPushFront(&first, 1);
	first->ListPushFront(&first, 2);
	first->ListPushFront(&first, 3);
	first->ListPushFront(&first, 4);

	first->ListPopKBack(&first, 3);

	return 0;
}