#include<iostream>
#include<string>

using namespace std;

void print_element(int element[], int c){ //prints element
	if (c==0){
	    cout<<"No elements"<<endl;
	}else{
	    for(int i=1;i<c;i++){
		    cout<<element[i-1]<<",";
	    }
	    cout<<element[c-1]<<endl;
     }
}

void add_element(int element[], int &c){ //adds element to array
	c++;
	cout<<"Enter element: ";
	cin>>element[c-1];
}

void return_size(int count, int array_size){ //returns size
	cout<<"S: "<<array_size<<","<<" E: "<<count<<endl;
	
}
		
void display_menu(){  //displays menu
	cout << "\n(p): Print elements"<<endl;
	cout << "(a): Add element"<<endl;
	cout << "(d): Delete element"<<endl;
	cout << "(r): Return size"<<endl;
	cout << "(e): Exit"<<endl<<endl;
	cout << "Enter option: ";
}


int main(){
    int array_size = 2; //size of array
	int* element = new int[array_size]; //dynamic memory allocated
	int* temp; 
	string n; //takes string for option
	int count = 0; //no. of elements in array.
	
	do{	
	    display_menu();
	    cin>>n;
	    if (n.length() != 1){
	    	cout<<"Invalid option"<<endl;
		}
	    else if (n == "p"){
		    print_element(element, count);
	    }   
	    else if (n == "a"){
	    	if (count>=array_size){ //increasing size of array
	    		array_size=array_size*2;
	    		temp = new int[array_size]; 
	    		for(int i=0; i<=count; i++){ //copying element to temporary array
	    			temp[i] = element[i];
				}
				
				delete[] element; //deallocating old array
				element = temp; //copying element from temp to old array after increasing size
			    add_element(element, count);
				cout<<"Array expanded"<<endl;
					
			}else{
				add_element(element, count);
			}
		
	    }
	    else if (n== "d"){
	    	int e; //element to delete
	    	int counter = 0; //counts no of data deleted
	    	cout<<"Enter element: ";
	    	cin>>e;
	    	int x = count;
		    for(int i=0; i<x; i++){
		    	if(element[i]==e){
		    		for(int j=i; j<count-1; j++){
		    			element[j]=element[j+1];
					}
					counter++;
					count--;
				}
			}
			if(counter == 0){
				cout<<"Not there"<<endl;
			}
		    if (count<=array_size/2 && array_size>0){ //decreasing array size
		    	array_size=array_size/2;
	    		temp = new int[array_size];
	    		for(int i=0; i<=count; i++){
	    			temp[i] = element[i];
				}
				
				delete[] element;
				element = temp;
				cout<<"Array shrinked"<<endl;
			}
	    }
	    else if (n == "r"){
		    return_size(count, array_size);
	    }
	    else if (n == "e"){
	    	delete[] element;
	    	delete[] temp; //memory deallocated
	    }
	    else{
	    	cout<<"Invalid option"<<endl;
		}
    }while(n != "e");	
    return 0;
}//program by aashish pant THA076BEI003
