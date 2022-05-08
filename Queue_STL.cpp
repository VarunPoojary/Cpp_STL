#include <iostream>
#include<queue>
 
using namespace std;
int main() 
{
  // Queue Initilization
  queue<string> q;
 
  // Adding Element
  cout<<"Addition Of Element"<<endl;
  q.push("Varun");
  q.push("Utkarsh");
  q.push("Rahul");
  cout<<"First Element "<<q.front()<<endl;
  cout<<"Last Element "<<q.back()<<endl;
  cout<<"Size:"<<q.size()<<endl;

 
  //Deleting Element
  cout<<"\nDeletion of Element"<<endl;
  cout<<"First Element "<<q.front()<<endl;
  q.pop();
  cout<<"First Element "<<q.front()<<endl;
 
  cout<<"Size after pop" <<q.size()<<endl;
 
}

