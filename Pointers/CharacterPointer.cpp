#include <iostream>
using namespace std;

int main() {
  char ch[10] = "Swetaaa";
  char* c = ch;

  cout<<ch<<endl; //entire string
  cout<<&ch<<endl;
  cout<<ch[0]<<endl;

  cout<<&c<<endl;
  cout<<*c<<endl; //*(c+0)--> c[0] //prints the first char of the string
  cout<<c<<endl;  //entire string

  //char name[9] = "SherBano";
  // char* c = &name[0];


  // cout<<name<<endl;           //sherBano
  // cout<<&name<<endl;         //address of s
  // cout<<*(name + 3)<<endl;  //r
  // cout<<c<<endl;           //sherBano
  // cout<<&c<<endl;          //address of c
  // cout<<*(c + 3)<<endl;    //r
  // cout<<c+2<<endl;        //2nd index to the end of the string
  // cout<<*c<<endl;        //s
  // cout<<c+8<<endl;   //8th index to end of the string



  // char ch = 'k';
  // char* cptr = &ch;

  // cout<<cptr<<endl; //prints till the null character




  char name[10] = "Sweta";
  cout<<name<<endl;

  const char* cptr = "sweta";
  cout<<cptr<<endl;


  return 0;
}