#include <iostream>
#include <string>
using namespace std;
int main() {
  // Write code here
  int bonus = 0;
  int q1 ;
  cout << "Q1) What is the name of the world's longest river? 💧\n";

 cout << "  1) Missouri River \n";
  cout << "2) Nile\n";
cout << "3) Amazon River\n";
cout << "4) Yangtze River\n";
cin>> q1;
if (q1==2){
   bonus = bonus +10;
}

int q2;
cout << "Q2) How many bones are in the human body? 🦴\n";

 cout << "  1) 92 \n";
  cout << "2)150\n";
cout << "3) 206\n";
cout << "4) 10\n";
cin>>q2;
if(q2==3){
bonus = bonus +10;
}

string q3;
cout << "Q3) What food never spoils? 😷\n";

cout << "Type your answer:\n";
cin >>q3;
if(q3=="honey"){
  bonus = bonus + 10;
}
if(q1==2 and q2==3 and q3== "honey"){
  cout<<"congrats, your bonus " << bonus << "happy new year broooo\n";
}
}


