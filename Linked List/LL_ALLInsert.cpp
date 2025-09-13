#include<bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     Node * next;
     Node(int x)
     {
          data = x;
          next = NULL;
     }
};
Node * head;
Node *tail;

void insertAtBack(int x)
{
     Node * temp = new Node(x);
     if(head == NULL)
          head = tail = temp;
     else
     {
          tail-> next = temp;
          tail= temp;
     }
     cout<<x<<".....................is added "<<endl;
}


void insertAtFront(int x)
{
     Node * temp = new Node(x);

     if(head == NULL)
          head = tail = temp;
     else
     {
          temp -> next = head;
          head = temp;
     }
     cout<<x<<"...........is added at front"<<endl;
}

void deleteAtFront()
{
          Node * temp = head;
          head = head->next;
          temp->next = NULL;
          cout<<temp->data<<" is deleted"<<endl;
          delete(temp);
}
void deleteAtTail()
{
     Node *temp= head;
     while(temp->next != tail)
          temp = temp->next;
     temp-> next = NULL;
     tail = temp;

}

void output()
{
     Node * temp = head;
     while(temp!= NULL)
     {
          cout<<temp->data<<" ";
          temp = temp-> next;
     }
     cout<<endl;
}

main(){
     insertAtBack(10);
     insertAtBack(20);
     insertAtBack(30);  output();

     insertAtFront(5);
     insertAtFront(15);
     output();
     deleteAtFront();
     output();
     deleteAtTail();
     output();


}
