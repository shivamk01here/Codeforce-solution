class Node{
      int data;
      node* next;
      Node(int value){
         data = value;
         next = null;
      }
    }

class List{
       node * head;
       node* tail;
   public:
         List(){
            head = NULL;
            tail = NULL;
         }

       void push_front(int val){
          Node* newNode = new Node(value);
            if(head == tail) {
            head = tail = newNode;
            }
          
            newNode->next = head;
            head = newNode;
         }

       void printLL( head){
            node* temp = head
               while(temp != NULL){
                  cout<<temp->data<<"/n";
                  temp = temp->next;
               }
               cout<< "NULL" << endl;
       }

   int main(){
      list ll;

      ll.push_front(1);
      ll.push_front(2);
      ll.push_front(3);

      ll.printLL();
      return 0;
   }

