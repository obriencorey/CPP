#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
    int input;
    do{
        cout << "Enter 1 to add data, 2 to print data, and 3 to exit: ";
        cin >> input;
        cout << endl;

        if(input == 1){
            int newdata;
            cout << "Enter your number: ";
            cin >> newdata;
            cout << endl;

            insert(newdata);
        }
        if(input == 2){
            cout<<"The linked list is: ";
            display();
        }
        
    }while(input != 3);

   return 0;
}