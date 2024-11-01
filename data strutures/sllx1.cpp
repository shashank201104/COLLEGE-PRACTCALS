#include <iostream> 

Using namespace std; 

Class Node 

{ 

Public: 

    Int data; 

    Node *next = NULL; 

}; 

Class Stack 

{ 

    Node *head = NULL; 

 

Public: 

    Void push() 

     

    { 

        Int num; 

        cout<<”\nenter node data \n”; 

        Cin>>num; 

        Node *node = new Node(); 

        Node->data = num; 

        Node->next = head; 

        Head = node; 

    } 

    Int pop() 

    { 

        If (head == NULL) 

        { 

            cout << “empty list\n”; 

            Return 0; 

        } 

        Else if (head->next == NULL) 

        { 

            cout << “deleting : “ << head->data << endl; 

            Return head->data; 

            Delete (head); 

            Head = NULL; 

        } 

        Else 

        { 

            Node *ptr = head; 

            Head = ptr->next; 

            cout << “deleting : “ << ptr->data << endl; 

            Return ptr->data; 

            Delete (ptr); 

        } 

    } 

    Int peek() 

    { 

        cout << “\n\nelement is : “ << head->data << endl<<endl; 

        Return head->data; 

    } 

    Bool isempty() 

    { 

        If (head == NULL) 

        { 

            cout << “\n\nstack is empty\n\n”; 

            Return true; 

        } 

        Else 

        { 

            cout << “\n\nstack is not empty\n\n”; 

            Return false; 

        } 

    } 

    Void display() 

    { 

        Node *ptr = head; 

        cout<<”\n\n”; 

        While (ptr != NULL) 

        { 

            cout << ptr->data << “ “; 


            Ptr = ptr->next; 

        } 

        cout << endl<<endl; 

    } 

}; 

 

Int main() 

{ 

    System(“cls”); 

    Stack s1; 

    Int choice; 

    Do{ 

        cout<<” 1   add element in stack\n”; 

        cout<<” 2   delete element from stack\n”; 

        cout<<” 3   display topmost element\n”; 

        cout<<” 4   check for empty stack\n”; 

        cout<<” 5   display empty stack\n”; 

        cout<<” 6   exit program\n”; 

        cout<<”enter your choice: “; 

        Cin>>choice; 

        Switch(choice){ 

            Case 1 : 

             

            S1.push(); 

            System(“cls”); 

            Break; 

            Case 2: 

            S1.pop(); 

            System(“cls”); 

            Break; 

            Case 3: 

            S1.peek(); 

            Break; 

            Case 4: 

            S1.isempty(); 

            Break; 

            Case 5: 

            S1.display(); 

            Break; 

            Case 6: 

            Break; 

            Default: 

            cout<<”enter correct option\n”; 

            Break; 

        } 

    }while(choice!=6); 

     

     

    Return 0; 

} 