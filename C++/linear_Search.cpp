#include<iostream>
using namespace std;
bool search(vector<int>&v,int num){
  int n=v.size();
  for(int i=0;i<n;i++){
    if(v[i]==num){
      return true;
    }
  }
  return false;
}
int main(){
  vector<int>arr;
  int number_of_elements;
  cout<<"Enter number of elemnts in array:";
  cin>>n;
  cout<<"Enter the numbers :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int number_to_find;
  cout<<"Enter the number you want to find";
  cin>>number_to_find;
  if(search(arr,number_to_find)) cout<<"Number is found";
  else cout<<"Number is not found";
  return 0;
}
