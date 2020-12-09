#include <iostream>
using namespace std;


int main(){
int* arr = new int[2];
arr[0]=1;
arr[1]=2;	
for(int i=0;i<2;i++){
	cout<<arr[i];
	}
	
	cout<<endl<<(sizeof(arr)/sizeof(arr[0]));
	
    int temp[2];
	for(int i=0;i<2;i++){
		temp[i]=arr[i];
	}
	delete [] arr;
	int* arr = new int[4];
	for(i=0;i<2;i++){
		arr[i]=temp[i];
	}
    cout<<endl<<(sizeof(arr)/sizeof(arr[0]));
}

}

