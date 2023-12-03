/*
Code : Reverse LL (Recursive)
Send Feedback
Given a linked list, reverse it using recursion.
You don't need to print the elements, just reverse the LL duplicates and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1
*/
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
    if(head==NULL)
        return NULL;
    node * newHead=reverse_linked_list_rec(head->next);
    node *iter=newHead;
    if(newHead==NULL)
        return head;
    // OR
    // if(head==NULL || head->next==NULL)
    //     return head;
    // node * newHead=reverse_linked_list_rec(head->next);
    // node *iter=newHead;
    
    while(iter->next!=NULL)
        iter=iter->next;
    iter->next=head;
    head->next=NULL;
    
    return newHead;
}

//method 2
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
    if(head==NULL || head->next==NULL)
        return head;
    node * newHead=reverse_linked_list_rec(head->next);
    
    node *tail=head->next;
    tail->next=head;
    head->next=NULL;
    
    return newHead;
}
