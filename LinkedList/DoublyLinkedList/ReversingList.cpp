#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *reversingList(Node *head) {
    Node *curr = head;
    Node *temp = NULL;

    // Traverse the list and swap `prev` and `next` pointers for each node
    while (curr != NULL) {
        temp = curr->prev;       // Store previous pointer
        curr->prev = curr->next; // Swap prev and next
        curr->next = temp;       // Set next to the stored previous pointer
        curr = curr->prev;       // Move to the next node (which is the previous node in the original list)
    }

    // After the loop, `temp` will point to the previous node of the original head
    if (temp != NULL) {
        head = temp->prev; // Update the head to the last node
    }

    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create a doubly linked list: 10 <-> 20 <-> 30
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    // Print original list
    cout << "Original List: ";
    printList(head);

    // Reverse the list
    head = reversingList(head);

    // Print reversed list
    cout << "Reversed List: ";
    printList(head);

    return 0;
}
