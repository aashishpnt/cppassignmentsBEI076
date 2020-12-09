#include<iostream>
using namespace std;
int main(){

char c;
cout << "Enter  a, b or c:";
cin>>c;
switch(c)
{
    case('a'):
      // do "1" processing
      cout<<"a";
      break;
    case ('b'):
      // do "2" processing
      cout<<"b";
      break;
    case ('c'):
      // do "3" processing
      cout<<"c";
      break;
    default:
      cout << "You didn't enter a 1, 2 or 3n";
}
}
