#include <iostream>

using namespace std;

class sample
{
    int capacity = 2;
    int *arr = new int[capacity];
    int length = 0;
    int *new_arr;
public:
    void expand_array()
    {
        if (length >capacity){
            new_arr = new int[2 * capacity];
            for(int i = 0; i<capacity; i++){
                new_arr[i] = arr[i];
            }
            capacity = 2 * capacity;
            delete [] arr;
            arr = new_arr;
        }
    }
    void add_elements(){
        cout << "Enter Element to add: ";
        if(length < capacity){
            cin >> arr[length];
            length++;
        }else{
            expand_array();
            capacity = 2*capacity;
            cin >> arr[length];
            cout << "Array expanded" <<endl;
            length ++;
        }
        cout << " " <<endl;

    }
    void display(){
        if (length == 0){
            cout << "No elements in the array" <<endl;
        }else{
            for(int i=0; i < length ; i++){
            cout << arr[i] << ",";
            }
            cout << " " <<endl;
        }
        cout << " " <<endl;
    }
    void return_size(){
        cout << "Size of array(S): " << capacity << ", Elements on array(E): " << length<<endl;
        cout << " " <<endl;
    }
    void delete_element(){
        int x;
        cout << "Enter element to delete: ";
        cin >> x;
        int i;
        int j=0,test = 0;
        int z = length;
        for(i=0; i< z; i++){
            if(x == arr[i]){
                length--;
                test = 1;
            }else{
                arr[j] = arr[i];
                j++;
            }
        } if(test != 1){
            cout << "Not there -- Element not found" <<endl;

        }
        if ((length <= (capacity * 0.5)) && (length > 0)){
            shrink_array();
            cout << "Array shrinked" << endl;
        }
        cout << " " <<endl;

    }
    void shrink_array(){
        if (length <= (capacity * 0.5)){
            capacity = 0.5 * capacity;
            new_arr = new int[capacity];
            for(int i = 0; i<capacity; i++){
                new_arr[i] = arr[i];
            }
            delete [] arr;
            arr = new_arr;
        }
    }
    void quit(){
        delete [] arr;
        delete [] new_arr;
        cout << "MEMORY CLEARED!"<< endl;
    }
    void options(){
        char i;
        cout << "(p): Print elements" <<endl;
        cout << "(a): Add element" << endl;
        cout << "(d): Delete element" << endl;
        cout << "(r): Return size" << endl;
        cout << "(e): Exit"<< endl;
        cout << "" <<endl;
        cout << "Enter option: " ;
        cin >> i;
        i = toupper(i);
        switch (i){
        case 'P':
            display();
            options();
            break;
        case 'A':
            add_elements();
            options();
            break;
        case 'D':
            delete_element();
            options();
            break;
        case 'R':
            return_size();
            options();
            break;
        case 'E':
            quit();
            break;
        default:
            cout << "Invalid option." <<endl;
            cout << " " <<endl;
            options();
        }

    }
};
int main()
{
    sample test;
    test.options();
    return 0;
}

