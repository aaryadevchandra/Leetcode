#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node* next;
}*head = NULL, *cur;



void add(int ele)
{

    if(head == NULL)
    {
        node* nn = new node;
        nn->data = ele;
        nn->next = NULL;
        head = nn;
        cur = nn;
        nn = NULL;
    }
    else
    {
        node* nn = new node;
        nn->data = ele;
        nn->next = NULL;
        cur->next = nn;
        cur = nn;
        nn = NULL;
    }

}
void display()
{
    node* ptr = head;

    while(ptr != NULL)
    {
        cout<<ptr->data<<", ";
        ptr = ptr->next;
    }
}

void function()
{
    cout<<"fucn me"<<endl;    

    int n; 

    node* list_pointer1 = head;

    cout<<endl;
    cout<<"Enter the nth node from the end that you wish to delete: ";
    cin>>n;

    n = n - 1;

    int count = 0;

    while(list_pointer1 != NULL)
    {
        count++;

        list_pointer1 = list_pointer1 -> next;
    }

    int total  =count;

    count = 1;

    node* list_pointer2 = head;

    while(list_pointer2 != NULL)
    {        
        list_pointer2 = list_pointer2->next;

        count++;

        if(count == total - n - 1)
        {
            list_pointer2->next = list_pointer2->next->next;
        }
    }

    cout<<"Your linked list after operation looks something like this: "<<endl;


    node* ptr = head;

    while(ptr != NULL)
    {
        cout<<ptr->data<<", ";
        ptr = ptr->next;
    }

}

int main()
{
    char ch ='n';

    int ele;
    while(ch == 'n')
    {
        system("cls");
        cout<<"Enter number: ";
        cin>>ele;
        add(ele);
        cout<<endl;
        cout<<"Do you wanna display? (y/n)";
        cin>>ch;
    }
    display();

    function();

}   