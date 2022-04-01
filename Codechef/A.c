// struct Node {
// 	int data;
// 	struct Node* next;
// 	Node(){
//         next = NULL;
//     }
// 	Node(int x){
// 		data = x;
// 		next = NULL;
// 	}
// };

// Node *sortedM(Node* a, Node* b)
// {

//     if (a == nullptr) {
//         return b;
//     }
 
//     else if (b == nullptr) {
//         return a;
//     }
 
//     Node *p;
//     if (a->data <= b->data)
//     {
//         p = a;
//         p->next = sortedM(a->next, b);
//     }
//     else {
//         p = b;
//         p->next = sortedM(a, b->next);
//     }
 
//     return p;
// }
 

// Node *merge(vector<Node*> v)
// {
//     int x = v.size();

//     if (x == 0) {
//         return nullptr;
//     }
 
//     int l = x - 1;

//     while (l != 0)
//     {
//         int i = 0, j = l;

//         while (i < j)
//         {

//             v[i] = sortedM(v[i], v[j]);
 

//             i++, j--;

//             if (i >= j) {
//                 l = j;
//             }
//         }
//     }
 
//     return v[0];
// }

#include <stdio.h> 
#include <stdlib.h> 

struct Node {
	int data;
	struct Node* next;
	Node(){
        next = NULL;
    }
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node* merge(vector<Node*> v)
    {
    vector<int>store;
    for(int i=0;i<v.size();i++)
        {
            Node *ptr=v[i];
            while(ptr!=NULL)
            {
                store.push_back(ptr->data);
                ptr=ptr->next;
            }
        }
        sort(store.begin(),store.end());
        Node *ptr=new Node();
        Node *aux=ptr;
        for(int i=0;i<store.size();i++)
        {
            Node *temp=new Node(store[i]);
            temp->next=NULL;
            ptr->next=temp;
            ptr=ptr->next;
        }
        return aux->next;
        //By Neel Shah D21DIT107
    }