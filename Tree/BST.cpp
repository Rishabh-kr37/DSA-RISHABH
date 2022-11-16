#include <iostream>
using namespace std;
#include <queue>

class Node
{
public:
        int data;
        Node *left;
        Node *right;

        Node(int d)
        {
                this->data = d;
                this->left = NULL;
                this->right = NULL;
        }
};

void levelOrderTraversal(Node *root)
{
        queue<Node *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
                Node *temp = q.front();
                q.pop();

                if (temp == NULL)
                {
                        // purana level complete traverse ho chuka hai
                        cout << endl;
                        if (!q.empty())
                        {
                                // queue still has some child ndoes
                                q.push(NULL);
                        }
                }
                else
                {
                        cout << temp->data << " ";
                        if (temp->left)
                        {
                                q.push(temp->left);
                        }

                        if (temp->right)
                        {
                                q.push(temp->right);
                        }
                }
        }
}

Node *insertintobst(Node *root, int d)
{

        // base case

        if (root == NULL)
        {
                root = new Node(d);
                return root;
        }
        if (d > root->data)
        {
                // right part me insert krna h
                root->right = insertintobst(root->right, d);
        }
        else
        {
                // left part me insert krna h
                root->left = insertintobst(root->left, d);
        }
        return root;
}

void takeinput(Node *&root)
{
        int data;
        cin >> data;

        while (data != -1)
        {
                root = insertintobst(root, data);
                cin >> data;
        }
}

int main()
{

        Node *root = NULL;

        cout << "enter data to create bst" << endl;
        takeinput(root);

        cout << "printing the bst" << endl;

        levelOrderTraversal(root);

        return 0;
}