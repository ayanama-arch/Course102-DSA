#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int num)
    {
        this->data = num;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data: ";
    cin >> data;

    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data to insert at the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data to insert at the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
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

// inorder traversal
void inorderTraversal(node *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
// postorder
void postorderTraversal(node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    // Tree
    node *root = NULL;

    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 -1

    // build from level order
    node *tree1 = buildTree(root);
    levelOrderTraversal(tree1);
    cout << "INORDER" << endl;
    inorderTraversal(tree1);
    cout << endl;
    cout << "preorder" << endl;
    preorderTraversal(tree1);
    cout << endl;
    cout << "postorder" << endl;
    postorderTraversal(tree1);
}