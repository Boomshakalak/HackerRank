/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *p = new Node();
    p->data = data;
    Node * cur = head;
    if (!cur) {
        p->next = cur;
        return p;
    }
    while(cur){
        if (cur->next == NULL)
            {cur->next = p;
            p->next = NULL;
             break;
            }
        cur = cur->next;
    }
    return head;
  // Complete this method
}
