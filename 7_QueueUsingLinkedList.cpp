#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
        class Node{
            public:
            int data;
            Node *next;
        };

    Node *head = NULL, *tail = NULL;

    public:
        Queue(int n)
        {
            Node *newnode = new Node();
            newnode->data = n;
            newnode->next = NULL;
            this->head = newnode;
            this->tail = newnode;
        }

        void enqueue(int n)
        {
            Node *newnode = new Node();
            newnode->data = n;
            newnode->next = NULL;

            if(this->head==NULL){
              this->head = newnode;
              this->tail = newnode;
              return;
            }

            (this->tail)->next = newnode;
            this->tail = (this->tail)->next;
        }

        void dequeue()
        {
            if(head==NULL){
                cout << "Queue already Empty" << endl;
                return;
            }
            Node *temp = this->head;
            this->head = temp->next;
            delete temp;
        }

        void show()
        {
          if(head==NULL){
            cout << "Queue Empty" << endl;
            return;
          }

          Node *trav = this->head;
          while(trav!=NULL){
            cout << trav->data << " ";
            trav = trav ->next;
          }
          cout << endl;
        }

        bool isEmpty()
        {
          return head==NULL;
        }

        int top()
        {
          if(head==NULL){
            cout << "Queue Empty" << endl;
            return INT_MIN;
          }
          return head->data;
        }

};





int main()
{
  Queue q = Queue(7);
  q.show();
  q.enqueue(8);
  q.enqueue(3);
  q.enqueue(1);
  q.enqueue(89);
  cout << q.top() << endl;
  q.dequeue();
  q.show();
  q.dequeue();
  q.dequeue();
  q.show();
  q.enqueue(9);
  q.show();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.top();
  q.show();
  return 0;
}
