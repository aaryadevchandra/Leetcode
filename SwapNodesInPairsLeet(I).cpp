#include<iostream>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
using namespace std;
struct node
{
    int data;
    node* next;
}*head=NULL, *cur;
node* add(int ele)
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
        nn->next = NULL;
        nn->data = ele;
        cur->next = nn;
        cur = nn;
        nn = NULL;
    }
    return head;
}//12->3->7->9->2
void display()
{
    node* ptr = head;
    cout<<"Linked List: "<<endl;
    while(ptr != NULL)
    {
        cout<<"-->"<<ptr->data;
        ptr = ptr -> next;
    }
}
void swap(int ele)
{
    system("cls");
    int swap;
    node* temp = head->next;
    node* ptr = head;
    while(true)
    {
        //swap
        swap = ptr->data;
        ptr->data = temp->data;
        temp->data = swap;
        if (temp->next == NULL)
        {
            break;
        }
        if(temp->next->next == NULL)
        {
            break;
        }
        ptr = temp->next;
        temp = temp->next->next;
    }
}
int main()
{
    int opt, ele, flag = 0;
    char mch = 'y', ch = 'y';
    while(mch == 'y')
    {
        ch = 'y';
        system("cls");
        cout<<"1. Add"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Swap nodes in pairs"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl;
        cout<<"Select option: ";
        cin>>opt;

        switch (opt)
        {
        case 1:
            while(ch == 'y')
            {
                system("cls");
                cout<<"Enter element: ";
                cin>>ele;
                add(ele);
                cout<<endl;
                display();
                cout<<endl;
                cout<<"Do you wish to enter more elements? (y/n): ";
                cin>>ch;   
            }
            break;
        
        case 2:
            system("cls");
            display();
            cout<<endl;
            system("pause");
            break;
        
        case 3:
        system("cls");
        swap(ele);
        break;
        case 4:
            exit(0);
            break;
        
        default: 
            system("cls");
            cout<<"Please select a valid option!"<<endl;
            break;
        }
    }
}