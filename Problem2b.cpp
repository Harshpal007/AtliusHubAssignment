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


// Floyd's Cycle Detection Time = (O(n)) Space = O(1)
bool checkForCycle(Node* head){
    // Two pointers one will iterate while moving two nodes ahead while the other will move one Node ahead
    Node* Tortoise = head; 
    Node* Hare = head;

    // If any of the Nodes become NULL in any case it will terminate the iteration and return false
    while(Hare != NULL && Tortoise != NULL){

        //Condition for checking when both the Nodes are same 
        if(Hare->val = Tortoise-> val){
            return true;
        }
        Hare = Hare->next;
        if(Hare == NULL) return false; // Hare =Hare->next->next will give error in case Next node of Hare is NULL hence extra functionality
        Hare = Hare->next; // One node moves two steps
        Tortoise = Tortoise->next; // One Node moves one
    }
    return false;
}