/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node * cur = head;
    Node * p = new Node();
        p->data = data;
    if (position == 0){
        p->next = cur;
        return p;
    }
    while(position--){
        Node * prev = cur;
        cur = cur->next;
        if (position == 0){
            prev->next = p;
            p->next = cur;
        }
    }
    return head;

  // Complete this method only
  // Do not write main function.
}
