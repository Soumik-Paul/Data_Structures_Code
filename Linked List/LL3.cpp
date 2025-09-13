#include<bits/stdc++.h>
using namespace std;
struct Node{
     string val;
     Node * next;

};
Node * head, * tail;

void  InsertAtBack(string name)
{
     Node * temp = new Node();
     temp->val = name;
     temp->next = NULL;
     if(head == NULL) // Linked List এ  এখনো কিছু এড হয়নি
          head = tail = temp;
     else{
          //Linked List এ কিছু আছে
          tail -> next = temp; // link তৈরি হইল
          tail= temp; // tail চলে গেল লাস্টের element এ
     }
     cout<<name<<" ............... is added "<<endl;
}

main()
{
     InsertAtBack("A ");
      InsertAtBack("B ");
       InsertAtBack("C ");
}
