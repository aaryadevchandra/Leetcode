#include<iostream>
#include<stdlib.h>
using namespace std;
struct node1
{
	node1* next1;
	int data1;
}*head1 = NULL, *cur1;
void add1(int ele1)
{
	if (head1 == NULL)
	{
		node1* nn = new node1;
		nn->data1 = ele1;
		nn->next1 = NULL;
		head1 = nn;
		cur1 = nn;
		nn = NULL;
	}
	else
	{
		node1* nn = new node1;
		nn->data1 = ele1;
		nn->next1 = NULL;
		cur1->next1 = nn;
		cur1 = nn;
		nn = NULL;
	}
}
void display1()
{
	node1* ptr1 = head1;
	cout << "Linked List 1: " << endl;
	while (ptr1 != NULL)
	{
		cout << "-->" << ptr1->data1;
		ptr1 = ptr1->next1;
	}
}
struct node2
{
	node2* next2;
	int data2;
}*head2 = NULL, * cur2;
void add2(int ele2)
{
	if (head2 == NULL)
	{
		node2* nn = new node2;
		nn->data2 = ele2;
		nn->next2 = NULL;
		head2 = nn;
		cur2 = nn;
		nn = NULL;
	}
	else
	{
		node2* nn = new node2;
		nn->data2 = ele2;
		nn->next2 = NULL;
		cur2->next2 = nn;
		cur2 = nn;
		nn = NULL;
	}
}
void display2()
{
	node2* ptr2 = head2;
	cout << "Linked List 1: " << endl;
	while (ptr2 != NULL)
	{
		cout << "-->" << ptr2->data2;
		ptr2 = ptr2->next2;
	}
}
int	fakeMain1()
{
	system("cls");
	char ch1 = 'y'; int ele1, count1 = -1;
	while (ch1 == 'y')
	{
		cout << "Enter element of first list: ";
		cin >> ele1;
		add1(ele1);
		count1++;
		cout << endl;
		cout << "Do you wish to add more? (y/n): ";
		cin >> ch1;
	}
	cout << endl;
	return count1;
}
int	fakeMain2()
{
	system("cls");
	char ch2 = 'y'; int ele2, count2 = -1;
	while (ch2 == 'y')
	{
		cout << "Enter element of second list: ";
		cin >> ele2;
		add2(ele2);
		count2++;
		cout << endl;
		cout << "Do you wish to add more? (y/n): ";
		cin >> ch2;
	}
	cout << endl;
	return count2;
}
int ConvertListToNum1()
{
	int count1 = fakeMain1(), i = 0, arr[10], num1 = 0;
	int var1 = count1;							
	node1* ptr = head1;
	while (ptr != NULL)
	{
		arr[i] = ptr->data1 * pow(10, count1 - var1);
		i++; var1--;	
		ptr = ptr->next1;
	}
	for (int x = 0; x < i; x++)
	{
		num1 += arr[x];
	}
	return num1;
}
int ConvertListToNum2()
{
	int count2 = fakeMain2(), i = 0, arr[10], num2 = 0;
	int var2 = count2;
	node2* ptr = head2;
	while (ptr != NULL)
	{
		arr[i] = ptr->data2 * pow(10, count2 - var2);
		i++; var2--;
		ptr = ptr->next2;
	}
	for (int x = 0; x < i; x++)
	{
		num2 = num2 + arr[x];
	}
	return num2;
}
int AddTwoNumbers(int a, int b)
{
	return a + b;
}
int main()
{
	int a = ConvertListToNum1();
	int b = ConvertListToNum2();
	int result = AddTwoNumbers(a, b);
	cout << "Result = " << result;
}