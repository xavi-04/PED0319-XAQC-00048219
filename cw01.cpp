#include <iostream>
using namespace std;
void print(node* list, int i, int n);

int main(void)
{
    node *list = NULL for (int i = 0; i < 20; i++)
    {
        list = queue(list, i);
    }
}

node *queu(node *list, int n)
{
    node *newNode = new node;
    newNode->n = n;
    newNode - < flag = true;
    newNode->next = NULL
}

else newNode->flag = false;
node *aux = list;
while (aux->next)
    aux = aux->next;
aux->next = list;
print(list, 0, list -> n);
return 0;
}
void print(node* list, int i, int n){
    if(i == 1 && list -> n){
        retun;
    }
    else{
        cout << list -> n << endl;
        print(list -> next, 1, n)
    }
}