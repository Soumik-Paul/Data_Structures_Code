#include<bits/stdc++.h>
using namespace std;

struct Node{
     string data;
     Node * next;
     Node(string s)
     {
          data = s;
          next = NULL;
     }

};
Node *head, *tail;
void  insideAtTail(string s)
{
     Node * temp = new Node(s);
     if(head == NULL)
          head = tail = temp;
     else
     {
          tail -> next = temp;
          tail = temp;
     }
     cout<<s<<" is added "<<endl;

}


void  insideAtHead(string s)
{
     Node * temp = new Node(s);
     if(head == NULL)
          head = tail = temp;
     else
     {
         temp->next = head;
         head= temp;
     }
     cout<<s<<" is added "<<endl;

}
void traverse()
{
     Node * temp = head;
     while(temp!= NULL)
     {
          cout<<temp->data<<" ";
          temp= temp->next;
     }
     cout<<endl;
}
main()
{
     insideAtTail("First Person ");   insideAtTail("Second Person ");   insideAtTail("Third Person ");
     traverse();
     insideAtHead("Notun Manush");
     traverse();

}
