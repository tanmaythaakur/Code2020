#include <bits/stdc++.h>
using namespace std;

class linkedList {
    class Node {
        public:
        int data;
        Node *next;
    };

    Node *head = NULL;
    int length = 0;
    public:
    linkedList(int data)
    {
        this->head = new Node();
        head->data = data;
        head->next = NULL;
        length = 1;
    }

    void prepend(int data)
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = this->head;
        this->head = newnode;
        length++;
    }

    void append(int data)
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = NULL;
        length++;
        if(this->head==NULL) {
            this->head = newnode;
            return;
        }
        Node *trav = head;
        while(trav->next != NULL) trav = trav->next;
        trav->next = newnode;
    }

    void show()
    {
        if(head==NULL) {
            cout << "Empty!" << endl;
            return;
        }
        Node *trav = head;
        while(trav!=NULL)
        {
            cout << trav->data << " ";
            trav = trav->next;
        }
        cout << endl;
    }

    // 0-based indexing for pos
    void insert(int data, int pos)
    {
        if(pos>length) return;
        length++;
        Node *newnode = new Node();
        newnode->data = data;
        if(pos == 0)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        Node *trav = head;
        for(int i=0; i<pos-1; i++) trav = trav->next;
        newnode->next = trav->next;
        trav->next = newnode;
    }

    void remove(int pos)
    {
        Node *trav = head;
        Node *temp = head;
        if(pos>=length) return;
        length--;
        if(pos==0){
            head = head->next;
            delete temp;
            return;
        }
        
        for(int i=0; i<pos-1; i++) trav = trav->next;
        temp = trav->next;
        trav->next = temp->next;
        delete temp;
        return;
    }

};


int main()
{
    linkedList list = linkedList(5);
    list.show();
    list.append(6);
    list.append(2);
    list.show();
    list.prepend(1);
    list.show();
    list.prepend(5);
    list.show();
    list.insert(13, 2);
    list.show();
    list.remove(6);
    list.show();
    list.insert(7, 7);
    list.show();
    list.insert(7, 6);
    list.show();

    return 0;
}