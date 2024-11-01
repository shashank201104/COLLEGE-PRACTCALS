#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
};

class Stack{
    Node* head=NULL;
    public:
    void push(){
        int num; 

        cout<<"\nenter node data \n"; 

        cin>>num; 

        Node *node = new Node(); 

        node->data = num; 

        node->next = head; 

        head = node; 
    };
    int pop(){
         if (head == NULL) 

        { 

            cout << "empty list\n"; 

            return 0; 

        } 

        else if (head->next == NULL) 

        { 

            cout << "deleting : " << head->data << endl; 

            return head->data; 

            delete (head); 

            head = NULL; 

        } 

        else 

        { 

            Node *ptr = head; 

            head = ptr->next; 

            cout << "deleting : "<< ptr->data << endl; 

            return ptr->data; 

            delete (ptr); 

        }
    };
    int peek(){
        
        cout << "\n\nelement is : "<< head->data << endl<<endl; 

        return head->data; 
    };
    bool isempty(){
          if (head == NULL) 

        { 

            cout << "\n\nstack is empty\n\n"; 

            return true; 

        } 

        else 

        { 

            cout << "\n\nstack is not empty\n\n"; 

            return false; 

        }
    };
    void display(){
        

        Node *ptr = head; 

        cout<<"\n\n"; 

        while (ptr != NULL) 

        { 

            cout << ptr->data <<" "; 


            ptr = ptr->next; 

        } 

        cout << endl<<endl; 
    };
};
int main() 

{ 

    system("cls"); 

    Stack s1; 

    int choice; 

    do{ 

        cout<<"1   add element in stack\n"; 

        cout<<" 2   delete element from stack\n"; 

        cout<<" 3   display topmost element\n"; 

        cout<<" 4   check for empty stack\n"; 

        cout<<" 5   display empty stack\n"; 

        cout<<" 6   exit program\n"; 

        cout<<"enter your choice: "; 

        cin>>choice; 

        switch(choice){ 

            case 1 : 

             

            s1.push(); 

            system("cls"); 

            break; 

            case 2: 

            s1.pop(); 

            system("cls"); 

            break; 

            case 3: 

            s1.peek(); 

            break; 

            case 4: 

            s1.isempty(); 

            break; 

            case 5: 

            s1.display(); 

            break; 

            case 6: 

            break; 

            Default: 

            cout<<"enter correct option\n"; 

            break; 

        } 

    }while(choice!=6); 

     

     

    return 0; 

}