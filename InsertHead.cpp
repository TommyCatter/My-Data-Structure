// InsertHead.cpp : 定义控制台应用程序的入口点。
//

// #include "stdafx.h"

#include<iostream>
using namespace std;
typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;


 //this is the way create a list by head
LinkList CreateListHead(LinkList &L)
{
	// LinkList s;
	LNode *s;
	ElemType t;
	L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	for (int i = 0; i < 9999; i++)
	{
		s = (LNode *)malloc(sizeof(LNode));
		cin >> t;
		s->next = L->next;
		s->data = t;
		L->next = s;
	}
	return L;
}
int main()
{
	
    return 0;
}

