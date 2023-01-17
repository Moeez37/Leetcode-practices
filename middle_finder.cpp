// C++ program for the above approach

#include <iostream>
using namespace std;

class Node {
public:
int data;
Node* next;
};

class NodeOperation {
public:
// Function to add a new node
void pushNode(class Node** head_ref, int data_val)
{

// Allocate node
class Node* new_node = new Node();

// Put in the data
new_node->data = data_val;

// Link the old list of the new node
new_node->next = *head_ref;

// move the head to point to the new node
*head_ref = new_node;
}

// A utility function to print a given linked list
void printNode(class Node* head)
{
while (head != NULL) {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL" << endl;
}

/* Utility Function to find length of linked list */
int getLen(class Node* head)
{
        int len = 0;
        class Node* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
         }
         return len;
}
void print_Middle(class Node* head)
{
    if(head==NULL)
    {
        cout<<"empty linked list"<<endl;
    }
    else if(head->next==NULL)
    {
        cout<<head->data<<"----middle!"<<endl;
    }
    else{
        class Node* temp=head;
        class Node* temp2=head->next->next;
        while(temp2!=NULL)
        {
            temp=temp->next;
            if(temp2->next==NULL)
            {
                break;
            }
            temp2=temp2->next->next;
        }
          cout<<temp->data<<"Middle data"<<endl;
}
}
};

// Driver Code
int main()
{
class Node* head = NULL;
class NodeOperation* temp = new NodeOperation();
for (int i = 10; i > 0; i--) {
temp->pushNode(&head, i);
temp->printNode(head);
temp->print_Middle(head);
}
return 0;
}