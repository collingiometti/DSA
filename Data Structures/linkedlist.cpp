#include <bits/stdc++.h>
using namespace std;

class node {
    public:
         int data;
         node* next;
};

int main(){
   freopen("input.in","r",stdin);

   node* head = new node();
   node* second = new node();
   //node* third = new node();
   
   int n; cin >> n;
   cin >> head->data;
   second = head;

   for(int i=0; i<n-1;i++){
      node* temp = new node();
      temp->next = NULL;
      cin >> temp->data;
      second->next = temp;
      second = temp;
   }

   second = head;
   cout << second->data << endl;
   while(second->next!=NULL){
      second = second->next;
      cout << second->data << endl;
   }
}
