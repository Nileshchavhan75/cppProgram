#include <iostream>
using namespace std;

// Node class to represent a single node in the linked list
class Node {
public:
    int data;      // Data stored in the node
    Node *next;    // Pointer to the next node
};

// Linked List class to handle linked list operations
class LinkedList {
    Node *head; // Head pointer for the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = NULL;
    }

    // Function prototypes
    void insertAtBeginning(int value); // Insert a node at the beginning
    void insertAtEnd(int value);       // Insert a node at the end
    void deleteFromBeginning();        // Delete a node from the beginning
    void deleteFromEnd();              // Delete a node from the end
    void display();                    // Display all nodes in the list
};

// Function to insert a node at the beginning of the linked list
void LinkedList::insertAtBeginning(int value) {
    Node *newNode = new Node(); // Dynamically allocate memory for the new node
    newNode->data = value;      // Assign the value to the new node
    newNode->next = head;       // The new node points to the current head
    head = newNode;             // Update head to the new node
    cout << value << " inserted at the beginning." << endl;
}

// Function to insert a node at the end of the linked list
void LinkedList::insertAtEnd(int value) {
    Node *newNode = new Node(); // Dynamically allocate memory for the new node
    newNode->data = value;      // Assign the value to the new node
    newNode->next = NULL;       // The next pointer of the new node is NULL

    // If the list is empty, set head to the new node
    if (head == NULL) {
        head = newNode;
    } else {
        // Traverse to the last node
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode; // Add the new node at the end
    }
    cout << value << " inserted at the end." << endl;
}

// Function to delete a node from the beginning of the linked list
void LinkedList::deleteFromBeginning() {
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return;
    }
    Node *temp = head; // Store the current head node
    head = head->next; // Update head to the next node
    cout << temp->data << " deleted from the beginning." << endl;
    delete temp; // Free the memory of the old head node
}

// Function to delete a node from the end of the linked list
void LinkedList::deleteFromEnd() {
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return;  
    }
    if (head->next == NULL) { // If there is only one node in the list
        cout << head->data << " deleted from the end." << endl;
        delete head;
        head = NULL;
        return;
    }
    // Traverse to the second last node
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    cout << temp->next->data << " deleted from the end." << endl;
    delete temp->next; // Free the memory of the last node
    temp->next = NULL; // Update the second last node's next pointer to NULL
}

// Function to display all nodes in the linked list
void LinkedList::display() {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    LinkedList list;

    // Perform insertion operations
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    // Display the linked list
    list.display();

    // Perform deletion operations
    list.deleteFromBeginning();
    list.display();

    list.deleteFromEnd();
    list.display();

    return 0;
}
