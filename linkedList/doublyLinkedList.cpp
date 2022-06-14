#include <iostream>
using namespace std;

class node // DOUBLU=Y LINKED LIST
{
public:
        int data;
        node *prev;
        node *next;

        // constructor
        node(int d)
        {
                this->data = d;
                this->prev = NULL;
                this->next = NULL;
        }

        ~node()
        {
                int val = this->data;
                if (next != NULL)
                {
                        delete next;
                        next = NULL;
                }
                cout << "memory free for node with data " << val << endl;
        }
};

// traversing a linked list
void print(node *head)
{
        node *temp = head;

        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
        cout << endl;
}

// gives length of linkedlist
int getlength(node *head)
{
        int len = 0;
        node *temp = head;
        while (temp != NULL)
        {
                len++;
                temp = temp->next;
        }
        return len;
}

void insertathead(node *&head, int d) // fn helps to insert  at start of the doubly linked list
{
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
}

void insertattail(node *&tail, int d) // fn helps to insert  at end of the doubly linked list
{
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
}

void insertatanyposition(node *&tail, node *&head, int position, int d)
{
        // insert at start
        if (position == 1)
        {
                insertathead(head, d);
                return;
        }
        node *temp = head;
        int cnt = 1;

        while (cnt < position - 1)
        {
                temp = temp->next;
                cnt++;
        }

        // insert at last end
        if (temp->next == NULL)
        {
                insertattail(tail, d);
                return;
        }

        // creating a node for d
        node *nodetoinsert = new node(d);

        nodetoinsert->next = temp->next;
        temp->next->prev = nodetoinsert;
        temp->next = nodetoinsert;
        nodetoinsert->prev = temp;
}

void deleteNode(int position, node *&head)
{

        // deleteing first or start node
        if (position == 1)
        {
                node *temp = head;
                temp->next->prev = NULL;
                head = temp->next;
                temp->next = NULL;
                delete temp;
        }
        else
        {
                // deleteing any middle node and last node
                node *curr = head;
                node *prev = NULL;

                int cnt = 1;
                while (cnt < position)
                {
                        prev = curr;
                        curr = curr->next;
                        cnt++;
                }
                curr->prev = NULL;
                prev->next = curr->next;
                curr->next = NULL;

                delete curr;
        }
}

int main()
{
        node *node1 = new node(10);
        node *head = node1;

        node *tail = node1;

        print(head);
        cout << getlength(head) << endl;

        insertathead(head, 11);
        print(head);

        insertathead(head, 12);
        print(head);

        insertathead(head, 13);
        print(head);
        insertathead(head, 14);
        print(head);

        insertattail(tail, 15); // insert at end in doubly linked list
        print(tail);

        insertatanyposition(tail, head, 2, 100); // inserting node at any position
        print(head);

        deleteNode(1, head); // delete node from first
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        deleteNode(6, head); // delete node for last
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        return 0;
}
