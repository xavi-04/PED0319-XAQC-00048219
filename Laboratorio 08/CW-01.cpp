#include <iostream>
using namespace std;

struct node
{
    int n;
    node *left, *right;
};

node *createLeaf(int n);
void insertInTree(node **tree, int n);
void preOrder(node *pTree);
void inOrder(node *pTree);
void postOrder(node *pTree);

int main(void)
{
    node *pTree = NULL;

    insertInTree(&pTree, 12);
    insertInTree(&pTree, 22);
    insertInTree(&pTree, 8);
    insertInTree(&pTree, 15);
    insertInTree(&pTree, 1);
    insertInTree(&pTree, 0);
    insertInTree(&pTree, 27);

    cout << "imprimiendo en preOrder" << endl;
    preOrder(pTree);
    cout << endl
         << endl;

    cout << "imprimiendo en inOrder" << endl;
    inOrder(pTree);
    cout << endl
         << endl;

    cout << "imprimiendo en postOrder" << endl;
    postOrder(pTree);
    cout << endl
         << endl;

    return 0;
}

node *createLeaf(int n)
{
    node *leaf = new node;
    leaf->n = n;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

void insertInTree(node **tree, int n)
{
    if (!(*tree))
    {
        *tree = createLeaf(n);
    }
    else
    {
        if (n <= (*(*tree)).n)
        {
            insertInTree(&(*(*tree)).left, n);
        }
        else
        {
            insertInTree(&(*(*tree)).right, n);
        }
    }
}

void preOrder(node *pTree)
{
    if (!pTree)
        return;
    else
    {
        cout << pTree->n << "\t";
        preOrder(pTree->left);
        preOrder(pTree->right);
    }
}

void inOrder(node *pTree)
{
    if (!pTree)
        return;
    else
    {
        inOrder(pTree->left);
        cout << pTree->n << "\t";
        inOrder(pTree->right);
    }
}

void postOrder(node *pTree)
{
    if (!pTree)
        return;
    else
    {
        postOrder(pTree->left);
        postOrder(pTree->right);
        cout << pTree->n << "\t";
    }
}