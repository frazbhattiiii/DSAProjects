#include<iostream>
#include<conio.h>
#include<vector>
#include<stack>
using namespace std;
stack<int> s;
class Node{
public :
  vector<int> parent;
  int vertex;
  Node *next;
};
class List{
public :
  void insert(int p, Node* head, Node* child){
    Node *h = new Node();
    h = head;
    while (h->next){
      h = h->next;
    }
    Node* inserted = new Node();
    child->parent.push_back(p);
    inserted->parent.push_back(p);
    inserted->vertex = child->vertex;
    inserted->next = NULL;
    h->next = inserted;
  }
  void display(Node* head){
    Node* temp = new Node();
    temp = head;
    while (temp){
      cout << temp->vertex << "---->";
      temp = temp->next;
    }
  }
  void topological_sort(vector<Node*> heads){
    if (heads.size() == 0){
      return;
    }
    cout << heads.size() << endl;
    int i, j, x, y, a;
    for (i = 0; i < heads.size(); i++){
      if (heads.at(i)->parent.size() == 0){
        s.push(heads.at(i)->vertex);
        for (a = 0; a < heads.size(); a++){
          Node * node = new Node();
          node = heads.at(a);
          while (node){
            for (j = 0; j < node->parent.size(); j++){
              if (node->parent.at(j) == heads.at(i)->vertex){
                node->parent.erase(node->parent.begin() + j);
              }
            }
            node = node->next;
          }
        }
        heads.erase(heads.begin() + i);
        i--;
        for (x = 0; x < heads.size(); x++){
          for (y = 0; y < heads.at(x)->parent.size(); y++){
            cout << heads.at(x)->parent.at(y) << ",";
          }
          cout << " --> " << heads.at(x)->vertex;
          cout << endl;
        }
        cout << endl;
        cout << heads.size() << endl;
      }
      
    }
    topological_sort(heads);
  }
};
int main(){
  vector<Node*> heads;
  int i;
  for (i = 0; i <= 5; i++){
    Node* temp = new Node();
    temp->vertex = i;
    temp->next = NULL;
    heads.push_back(temp);
  }
  List *list = new List();
  list->insert(5, heads.at(5), heads.at(2));
  list->insert(5, heads.at(5), heads.at(0));
  list->insert(4,heads.at(4), heads.at(0));
  list->insert(4,heads.at(4), heads.at(1));
  list->insert(2,heads.at(2), heads.at(3));
  list->insert(3,heads.at(3), heads.at(1));

  int j;
  list->topological_sort(heads);
  cout << heads.size() << endl;
  

  cout << endl;
  cout << endl;
  while (!s.empty()){
    cout << s.top() << endl;
    s.pop();
  }
  _getch();
  return 0;
}

