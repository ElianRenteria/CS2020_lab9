//Elian Renteria
//lab09.cpp

#include <iostream>
#include "bst.cpp"
#include <string>

using namespace std;
int main() {
  BinarySearchTree<int> intree;
  int val, lowval, highval;
  //insert int
  cout << "insert the values (stop when entering 0): \n";
  cin >> val;
  while(val != 0){
    intree.insert(val);
    cin >> val;
  } 
  cout << "\nprint the values:\n";
  intree.printBST();
  //remove int
  cout << "\nremove the values (stop when entering 0):\n";
  cin >> val;
  while(val != 0){
    intree.remove(val);
    cin >> val;
  }
  cout << "\nprint the values:\n";
  intree.printBST();
  //print int range
  cout <<  "\nPlease enter the range: \n";
  cin >> lowval >> highval;
  cout << "\nPrint the element between the range: \n";
  intree.printRange(lowval,highval);
  cout << endl;
  //string tree
  BinarySearchTree<string> strtree;
  string str;
  cout << "insert the strings (stop when entering \"exit\"):\n";
  cin >> str;
  while(str != "exit"){
    strtree.insert(str);
    cin>>str;
  }
  cout << "\nprint the values:\n";
  strtree.printBST();
  
  return 0;
} 