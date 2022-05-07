#include <iostream>
#include<stack>
 
using namespace std;
int main() 
{
  //Stack Initilization
  stack<string> s;
 
  // Addition of Value
  cout<<"Adding Elements"<<endl;
  s.push("Varun");
  s.push("Utkarsh");
  s.push("Rahul");
  // Top Most Element in Stack
  cout<<"Top Element-> "<<s.top()<<endl;
 
  // Deletion of Element from stack
  cout<<"\nDeletion of Element"<<endl;
  s.pop();
  
  
  cout<<"Top Element-> "<<s.top()<<endl;
 
  cout<<"\nSize of stack:"<<s.size()<<endl;
 
  cout<<"\nEmpty or not: "<<s.empty()<<endl;
 
}
