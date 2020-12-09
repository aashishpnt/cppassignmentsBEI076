#include<iostream>
using namespace std;
int main(){
    int *q = new int [10];

    for( int i=0; i<5; i++)
    {
    cin>>q[i];
    }

    for( int i=0; i<5; i++)
    {
    cout<<q[i]<<endl;
    }
    cout<<endl;

    delete[] q;

    for( int i=0 ; i<5; i++){
    cout<<q[i]<<endl; 
	}
}

