#include <iostream>
using namespace std;

class node
{

public:
        int data;
        node *next;

        // constructor
        node(int data)
        {
                this->data = data;
                this->next = NULL;
        }
};

void inserattail1(node *&tail1, int d)
{
        node *temp1 = new node(d);
        tail1->next = temp1;
        tail1 = tail1->next;
}
void inserattail2(node *&tail2, int d)
{
        node *temp = new node(d);
        tail2->next = temp;
        tail2 = tail2->next;
}

void print(node *&head1, node *&head2)
{
        node *temp1 = head1;
        node *temp2 = head2;
        while (temp1 != NULL || temp2 != NULL)
                if (temp1 != NULL)
                {
                        cout << temp1->data << " ";
                        temp1 = temp1->next;
                }
                else if (temp2 != NULL)
                {
                        cout << temp2->data << " ";
                        temp2 = temp2->next;
                }

        cout << endl;
}

int main()
{
        node *node1 = new node(10);
        node *head1 = node1;
        node *tail1 = node1;

        node *node2 = new node(11);
        node *head2 = node2;
        node *tail2 = node2;

        inserattail1(tail1, 20);
        // print(tail1);

        inserattail2(tail2, 22);
        // print(tail2);

        inserattail1(tail1, 30);
        // print(tail1);

        inserattail2(tail2, 33);
        // print(tail2);

        inserattail1(tail1, 40);
        // print(tail1);

        inserattail2(tail2, 44);
        // print(tail2);

        inserattail1(tail1, 50);
        // print(tail1);

        inserattail2(tail2, 55);
        // print(tail2);

        inserattail1(tail1, 60);
        // print(tail1);

        inserattail2(tail2, 66);
        print(head1, head2);
        // cout << head1 << endl;
        // cout << head2 << endl;

        return 0;
}