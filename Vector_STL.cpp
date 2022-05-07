#include <iostream>
// Vector Declaration
#include<vector>
using namespace std;
int main() 
{
  // Vecotr Initialization Method 1
  vector<int> vector1 = {1, 2, 3, 4, 5};
  //Ranged Loop
  cout<<"Vector 1:";
  for(int i:vector1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
 
  // Vector Initialization Method 2
  vector<int> vector2(5,0);
  cout<<"Vector 2:";
  for(int i: vector2) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
  
  // Vector Initialization Method 3 
  vector<int> vector3(vector2);
  cout<<"Vector 3:";
  for(int i: vector3) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
  
  
  // Capacity and Size
  cout<<"\nCapacity:"<<vector1.capacity()<<endl;
  cout<<"Size:"<<vector1.size()<<endl;
  
  // Adding Elements in Vector
  vector1.push_back(6);
  cout<<"\nCapacity-> "<<vector1.capacity()<<endl;
  cout<<"Size:"<<vector1.size()<<endl;




  //Accessing Elements in Vector 
  cout<<"\nElement at the 2nd Index: " <<vector1.at(2)<<endl;
 
 
  // First and Last Element
  cout<<"\nFirst Element:" <<vector1.front()<<endl;
  cout<<"Last Element:" <<vector1.back()<<endl;
 
 
 // Deleting Elements from Vector
 cout<<"\nBefore Deleting:"<<endl;
  for(int i:vector1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
 
  vector1.pop_back();
 
  cout<<"After Deleting"<<endl;
  for(int i:vector1) 
  {
    cout<<i<<" ";
  }
  cout<<endl;
 
  cout<<"\nSize of Vector:"<<vector1.size()<<" Capacity:"<<vector1.capacity()<<endl;
  vector1.clear();
  cout<<"Size of Vector after clearing:"<<vector1.size()<<" Capacity:"<<vector1.capacity()<<endl;

return 0;
}

