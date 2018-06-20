// CreateListTail.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<malloc.h>
using namespace std;
typedef int ElemType;
typedef struct LNode 
{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList LinkListCreateT(LinkList &L)
{
	LNode *P,*R;
	int t;
	L = (LNode *)malloc(sizeof(LNode));
	R=L;
	while (t != 9999)     //input t=9999 to break 
	{
		P = (LNode *)malloc(sizeof(LNode));
		P->data = t;
		R->next = P;
		R = P;
		cin >> t;
	}
	R->next = NULL;
	return L;
}
int main()
{
    return 0;
}

