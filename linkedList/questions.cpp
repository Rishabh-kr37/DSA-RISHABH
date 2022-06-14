#include <iostream>
#include <map>
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
void insertattail(node *&tail, int d)
{
        node *temp = new node(d);
        tail->next = temp;
        tail = tail->next;
}

void insertathead(node *&head, int d)
{

        node *ram = new node(d);
        ram->next = head;
        head = ram;
}

void print(node *&head)
{
        node *temp = head;
        while (temp != NULL)
        {

                cout << temp->data << " ";
                temp = temp->next;
        }
        cout << endl;
}

/*bool detectloop(node *head) // FUNCTION TYPE -1 USE TO DETECT LOOP IN LINKEDLIST using MAP.
{

        if (head == NULL)
        {
                return false;
        }

        map<node *, bool> visited;

        node *temp = head;

        while (temp != NULL)
        {
                // cycle is present
                if (visited[temp] == true)
                {
                        cout << "Present on element " << temp->data << endl;

                        return true;
                }
                visited[temp] = true;
                temp = temp->next;
        }
        return false;
}*/

node *floydDetectLoop(node *head) // FUNCTION TYPE-2 USE TO DETECT LOOP IN LINKEDLIST using floyd cycle detection algorithm.
{
        if (head == NULL)
                return NULL;

        node *slow = head;
        node *fast = head;

        while (slow != NULL && fast != NULL)
        {
                fast = fast->next;
                if (fast != NULL)
                {
                        fast = fast->next;
                }

                slow = slow->next;
                if (slow == fast)
                {
                        cout << "present at " << slow->data << endl;

                        return slow;
                }
        }
        return NULL;
}

node *getstartingnode(node *head)
{
        if (head == NULL)
                return NULL;

        node *intersection = floydDetectLoop(head);
        node *slow = head;
        while (slow != intersection)
        {
                slow = slow->next;
                intersection = intersection->next;
        }
        return slow;
}

void removeloop(node *head)
{
        if (head == NULL)
                return;
        node *startingofloop = getstartingnode(head);
        node *temp = startingofloop;

        while (temp->next != startingofloop)
        {
                temp = temp->next;
        }
        temp->next = NULL;
}

int main()
{

        node *papa1 = new node(10);
        node *head = papa1;
        node *tail = papa1;

        insertattail(tail, 20);

        insertattail(tail, 30);

        insertattail(tail, 40);

        insertattail(tail, 50);

        insertattail(tail, 60);

        insertattail(tail, 70);
        print(head);

        tail->next = head->next;

        // detectloop(head);

        if (floydDetectLoop(head) != NULL)
        {
                cout << "cycle is present" << endl;
        }
        else
        {
                cout << "cycle is not present" << endl;
        }

        node *loop = getstartingnode(head);

        cout << "loop starts at " << loop->data << endl;

        removeloop(head);
        print(head);

        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        /*
        1-detect cycle in LL--floydDetectLoop
        2-find the begning node cycle--getstartingnode
        3-remove cycle form LL--removeloop
        */

        return 0;
}