#include <iostream>
using namespace std;

struct node{
    string word;
    node* left, *right;
};

node *createLeaf(string word);
void insertInTree(node **pTree, string word);
void preOrder(node *pTree);
void inOrder(node *pTree);
void postOrder(node *pTree);

int main(void){
    
    node* pTree = NULL;
    insertInTree(&pTree, "hola");
    insertInTree(&pTree, "pupusas");
    insertInTree(&pTree, "codigo");
    insertInTree(&pTree, "adios");
    insertInTree(&pTree, "F");
  

    return 0;
}

node *createLeaf(string word)
{
    node *leaf = new node;
    leaf->word = word;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

void insertInTree(node **pTree, string word)
{
    if (!*pTree)
        *pTree = createLeaf(word);
    else
    {
        if (word.compare((*(*pTree)).word) <= 0){
            insertInTree(&(*(*pTree)).left, word);
        }
        else
        {
            insertInTree(&(*(*pTree)).right, word);
        }
    }
    
}

void preOrder(node *pTree)
{
    if (!pTree)
        return;
    else
    {
        cout << pTree->word << "\t";
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
        cout << pTree->word << "\t";
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
        cout << pTree->word << "\t";
    }
}