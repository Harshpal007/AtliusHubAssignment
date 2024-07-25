#include<iostream.h>

using namespace std;

// Node class 
class Node{
    int val;
    Node* next;

    // Constructor for new Node creation with value
    Node(int value){  
        val = value;
        next = NULL;
    }
    // Constructor for new Node creation without value
    Node(){
        next = NULL;
    }
}


// Time Complexity O(N) as we are iterating through the list only once
// Space Complexity O(1) as only constant amount of variables are used on every function call
void reverseLinkedList(Node* head){

    //Copy of the head Node
    Node* currNode = head;
    
    // Two iterative nodes for reversal
    Node* nextNode = new Node();
    Node* prevNode = new Node();


    while(currNode!= NULL){
        // Storing the next Node
        nextNode = currNode->next;  
        //Reversing the current Node pointer
        currNode->next = prevNode;
        
        // Moving ahead for the next iteration
        prevNode = currNode;
        currNode = nextNode;
    }
    return ;
}
