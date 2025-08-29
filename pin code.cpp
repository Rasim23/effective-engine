#include <iostream>
using namespace std;
int main() {
  
  int pin;
cout << "enter your pin \n";
cin>> pin;
while(pin!=1234){
  cout << "pin is incorrect \n";
  cin >> pin;
}
if(pin==1234){
  cout<<"correct pin\n";
}

}
