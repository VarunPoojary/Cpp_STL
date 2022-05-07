#include <iostream>
#include<list>
 
using namespace std;

int main() 
{
  //List Initialization Method 1
  list<int> list1 = {0};
  cout<<"Printing List1:";
  for(int i:list1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  //List Initialization Method 2
  list<int> list2(5,100);
  
  cout<<"Printing List2:";
  for(int i:list2) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
  // Insert element in the front and back of list
  cout<<"\nInserting Elements"<<endl;
  list1.push_back(1);
  for(int i:list1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
  
  list1.push_front(2);
  for(int i:list1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
  // delete element in the front and back of list
  cout<<"Deleting Elements"<<endl;
  list1.pop_back();
  for(int i:list1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
  
  list1.pop_front();
  for(int i:list1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
 
  // Size of List
  cout<<"\nSize:"<<list1.size()<<endl;
}
