#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversak (struct Node * ptr){
while(ptr!=NULL){
    printf("%d",ptr->data);
    ptr =ptr->next;
    }

}
int main() {
	// your code goes here
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head=(struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    
    //Link first and second nodes 
    head->data=7;
    head->next =second;
    //Link second and third nodes 
    second->data=7;
    second->next =second;
    //Terminate the list at third node
    third->data=66;
    third->next=NULL;
    
	return 0;
}
