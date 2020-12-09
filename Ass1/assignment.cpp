#include<iostream>
using namespace std;

class employee {
    char name[30];
    char position[30];

public:
    void getdata();
    void display();
};

void employee :: getdata(){
cout<< "Enter name of employee: ";
cin>> name;
cout <<"Enter position of employee: ";
cin>> position;

}

void employee ::display(){

cout <<"\n Name : " <<name;
cout <<"\n position : "<< position;

}

int main (){
employee p;

p.getdata();
p.display();

return 0;

}



