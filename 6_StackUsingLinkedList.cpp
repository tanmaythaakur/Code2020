#include <bits/stdc++.h>
using namespace std;

class Stack{
    private:
        class Node{
            public:
            int data;
            Node *next;
        };

    Node *head;

    public:
        Stack(int data)
        {
            Node *node = new Node();
            node->data = data;
            node->next = NULL;
            this->head = node;
        }

        void push(int x)
        {
            Node *node = new Node();
            node->data = x;
            node->next = this->head;
            this->head = node;
        }

        int top()
        {
            if(this->head == NULL){
                cout << "Stack Empty" << endl;
                return INT_MIN;
            }
            return (this->head)->data;
        }

        void pop()
        {
            if(this->head == NULL){
                cout << "Error! Stack Already Empty" << endl;
                return;
            }
            Node *temp = (this->head);
            this->head = temp->next;
            delete temp;
        }

        void show()
        {
            if(this->head == NULL)
            {
                cout << "Stack Empty!!!" << endl;
                return;
            }
            Node *trav = this->head;
            while(trav != NULL){
                cout << trav->data << " ";
                trav = trav -> next;
            }
            cout << endl;
        }

        bool isEmpty()
        {
            return head==NULL;
        }

};





int main()
{
    Stack s = Stack(4);
    s.show();
    s.push(7);
    cout << s.top() << endl;
    s.show();
    s.pop();
    s.show();
    s.pop();
    s.show();
    cout << s.isEmpty() << endl;
    
    return 0;
}