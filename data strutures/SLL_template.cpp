#include <iostream>
using namespace std;
template<class h>
class Node
{
public:
    h data;
     Node<h>*next = NULL;
};
template<class h>
class LinkedList
{   public:
     Node<h>*head=NULL;

public:
    void add_at_begining()
    {
        h num;
        cout<<"enter data\n";
        cin>>num;
         Node<h>*node = new  Node<h>();
        node->data = num;
        node->next=head;
        head=node;
    }

    void add_at_end(){
        h num;
        cout<<"enter data\n";
        cin>>num;
         Node<h>* node=new  Node<h>();
        node->data=num;
        if(head==NULL){
            head=node;

        }
        else {
             Node<h>*ptr=head;
            while(ptr->next!=NULL){

                ptr=ptr->next;
            }
            ptr->next=node;
        }
    }
    void add_at_location(){
        h num;
        int pos;
        cout<<"enter data\n";
        cin>>num;
        cout<<"enter poistion\n";
        cin>>pos;       
        Node<h>*node=new  Node<h>();   
        Node<h>*ptr=head;
        node->data=num;
        for(int  i=1;i<pos-1;i++){
            ptr=ptr->next;
        }
        node->next=ptr->next;
        ptr->next=node;
    };

    void delete_begin(){
        if(head==NULL){
            cout<<"SLL is empty\n";
        }
        else if(head->next==NULL){
            
        }
        else{
             Node<h>* ptr=head;
            head=head->next;
            cout<<"deleting node with data "<<ptr->data<<endl;
            delete(ptr);
        }
    }

    void delete_end(){
        if(head==NULL){
            cout<<"SLL is empty\n";

        }
        else if(head->next==NULL){
            delete (head);
        }
        else{
             Node<h>* ptr1 =head;
             Node<h>* ptr2=head;

            while(ptr1->next!=NULL){
                ptr2=ptr1;
                ptr1=ptr1->next;
            }
            cout<<"deleting node with data "<<ptr1->data<<endl;
            delete(ptr1);
            ptr2->next=NULL;

        }
    }

    void delete_from_location(){
        int pos;
        cout<<"enter poistion\n";
        cin>>pos;
         Node<h>*ptr1=head;
         Node<h>*ptr2=head;
        for(int i=1;i<pos;i++){
            ptr2=ptr1;
            ptr1=ptr1->next;
        }
        cout<<"deleting node with data "<<ptr1->data<<endl;
        ptr2->next=ptr1->next;
        delete(ptr1);
    }
    
    void display(){
         Node<h>* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
        cout<<endl;
    }

};

int main()
{
    LinkedList<char> l1;
    int ch;
    do{
    cout<<"1    -   insert element at begining\n";
    cout<<"2    -   insert element at end\n";
    cout<<"3    -   insert element at given location\n";
    cout<<"4    -   delete element from begining \n";
    cout<<"5    -   delete element form end\n";
    cout<<"6    -   delete element form given poisition\n";
    cout<<"7    -   display the singly linked list\n";
    cout<<"8    -   exit the program\n";
    cout<<"\n enter your choice     -   ";
    cin>>ch;
    switch(ch){
        case 1:
        l1.add_at_begining();
         
        break;
        case 2:
        l1.add_at_end();
         
        break;
        case 3:
        l1.add_at_location();
         
        break;
        case 4:
        l1.delete_begin();
         
        break;
        case 5:
        l1.delete_end();
         
        break;
        case 6:
        l1.delete_from_location();
         
        break;
        case 7:
        l1.display();
        case 8:
        break;
        default:
        cout<<"\n\nenter correct option\n\n";
        break;
    }
    }while(ch!=8);

    return 0;
}