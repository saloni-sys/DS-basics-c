#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next = NULL;
};
node *head = NULL;

void insert()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        cout << "memory could not be alloacated" << endl;
        ;
    }
    else
    {
        cout << "Enter the data to be inserted" << endl;
        ;
    }
    cin >> temp->data;
    temp->next = head;
    head = temp;
}
int main()
{

    insert();
    insert();
    insert();
    insert();
    insert();

    struct node *slow = head;
    struct node *fast = head;
    struct node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
   prev->next = slow->next;
delete slow;

    node *t = head;
    while (t != NULL)
    {
        cout << t->data << " -> ";
        t = t->next;
    }
    return 0;
}