# include <iostream>
# include <queue>
using namespace std;

class myQueue{
     
      public:
              class node{
                   
                    public:
                           int data;
                           node* next;
                           
                           node(int val): data(val), next(NULL){}
     
     
      };
     
      node* f = NULL;
      node* r = NULL;
     
     
      void push(int value){
          node* newNode = new node(value);
           if( f == NULL){
               f = r = newNode;
               return;
           }
           r->next = newNode;
           r = newNode;
      }
      void pop(){
                if(f == NULL)
                     return;
                     
                node* temp = f;
                f = f->next;
               
                if(f == NULL)
                     r = NULL;
                         
                delete temp;
      }  
                         int front(){
              if( f == NULL)
              return -1;
              return f->data;
      }
           bool empty(){
           if(f == NULL)
                return true;
           else
               return false;
           }
};
int main(){
   
    myQueue q;
   
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     
     cout<< q.front()<<endl;
     q.pop();
     cout<<q.front();
     
     
     while( !q.empty()){
            cout<<q.front()<< " ";
            q.pop();
     }
     
     return 0;
}

   
      