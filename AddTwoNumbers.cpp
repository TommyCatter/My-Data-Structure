// AddTwoNumbers.cpp : 定义控制台应用程序的入口点。
//
/*
#include "stdafx.h"
#include <malloc.h>
#include <iostream>
using namespace std;
typedef struct Node {
	int data;       //单链表的数据
	struct Node *next;     //单链表的指针域
}Node, *LinkedList;
LinkedList LinkedListCreatH()
{
	Node *L;
	L = (Node *)malloc(sizeof(Node));
	L->next = NULL;
	Node *P;
	int temp;
	  while (cin >> t) 
	{
		P = (Node *)malloc(sizeof(Node));
		P->data = t;
		P->next = L->next;
		L->next = P;
	}
	do 
	{
		cin >> temp;
		if (temp ==( )
		{

		}
	} while (true);
	return L;
}
int main()
{
	LinkedList list,start;
	list = LinkedListCreatH();
	for (start = list->next;start != NULL;start = start->next)
		cout << start->data << "    ";
	system("pause");
    return 0;
}
*/// LinkedList.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream>
#include <malloc.h>
#include <cmath>
using namespace std;
typedef int  ElemType;
typedef struct Node
{
	ElemType data;
	struct Node *next;
}Node, *LinkedList;

LinkedList LinkedListCreatH(int n)
{
	int i = 0;
	ElemType temp;
	LinkedList L;
	L = (Node *)malloc(sizeof(Node));
	L->next = NULL;
	while (i<n)
	{
		Node *P;
		cin >> temp;
		P = (Node *)malloc(sizeof(Node));
		P->next = L->next;
		P->data = temp;
		L->next = P;
		i++;
	}
	return L;
}
int main()
{
	int n1, n2, i, output, output1 = 0, output2 = 0;
	LinkedList start, list1, list2;
	cout << "请输入第一个链表的长度：" << endl;
	cin >> n1;
	cout << "请输入第一个链表的数据：" << endl;
	list1 = LinkedListCreatH(n1);
	/*for (start =list->next;start != NULL;start = start->next)
	cout << start->data << endl;  */
	cout << "请输入第二个链表的长度：" << endl;
	cin >> n2;
	cout << "请输入第二个链表的数据：" << endl;
	list2 = LinkedListCreatH(n2);
	i = n1;
	for (start = list1->next;start != NULL;start = start->next)   //头插法从高位往低位转换成十进制的数
	{
		output1 = output1 + pow(10, i - 1)*start->data;
		i--;
	}
	i = n2;
	for (start = list2->next;start != NULL;start = start->next)   //头插法从高位往低位转换成十进制的数
	{
		output2 = output2 + pow(10, i - 1)*start->data;
		i--;
	}
	output = output1 + output2;
	cout << output << endl;
	if (n1 >= n2)
	{
		for (i = 0;i < n1;i++)
		{
			cout << output % 10 << "  ";
			output = output / 10;
		}
	}
	else
	{
		for (i = 0;i < n2;i++)
		{
			cout << output % 10 << "  ";
			output = output / 10;
		}
	}
	system("pause");
	return 0;
}


