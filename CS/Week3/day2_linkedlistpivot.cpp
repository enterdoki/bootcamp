#include <iostream>
#include <vector>

using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode *next;
};


void insert(SinglyLinkedListNode *ptr, int item) {
    SinglyLinkedListNode *temp;
    SinglyLinkedListNode *head = ptr;
    temp->data = item;
    temp->next = nullptr;

    while(head -> next != nullptr) {
        head = head->next;
    }
    ptr->next = temp;
}

SinglyLinkedListNode* linked_list_pivot(SinglyLinkedListNode* lst, int key) {
    SinglyLinkedListNode *head = lst;
    vector<int> data;
    while(head != nullptr) {
        if(head->data < key) {
            data.push_back(head->data);
        }
        head = head->next;
    }
    while(head != nullptr) {
        if(head->data == key) {
            data.push_back(head->data);
        }
        head = head->next;
    }
    while(head != nullptr) {
        if(head->data > key) {
            data.push_back(head->data);
        }
        head = head->next;
    }

    SinglyLinkedListNode *new_list;
    new_list->data = data[0];
    for(int i = 1; i < data.size(); i++) {
        insert(new_list, data[i]);
    }
    return new_list;
}