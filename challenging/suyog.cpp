#include <iostream>

void line();

using namespace std;

int main()
{
    int selection, size = 2, eleCount = 0, input ;
    int *dArray = new int [size];

    {
        cout << "(p) Print Element" << endl;
        cout << "(a) Add Element" << endl;
        cout << "(d) Delete Element" << endl;
        cout << "(r) Return Size" << endl;
        cout << "(e) Exit" << endl;
    }

    do
    {
        cout << "Enter your choice:";
        cin >> selection;

        switch (selection)
        {
        case 'p':
            if (eleCount == 0)
                cout << endl << "\t No Elements" << endl;
            else
            {
                for (int i = 0 ; i < eleCount; i++)
                    cout << " " << dArray [i];

                cout << endl;
            }

            break;

        case 'a':                // Adding Elements
            cout << "    Enter Element to add :: ";
            cin >> input;

            eleCount ++;

            if (eleCount > size)        // Expands the array if Array if Full
            {
                size *= 2;
                int *temp = new int[size];      // temporary array of twice size
                temp = dArray;                  // coping of old array to temporary array
                delete [] dArray;               // Deallocation of old array
                int *dArray = new int [size];   // New array of expanded size
                dArray = temp;                  // Coping Temporary array (Old array) to New Array of expanded Size
                delete temp;                    // Deallocation of Temporary Array

                cout << endl << "\t Array Expanded" << endl;
            }

            dArray [eleCount-1] = input;        // Adding the new element into array

            break;

        case 'd':
            int check;

            check = 0;

            cout << "    Enter Element to delete  :: ";
            cin >> input;

            for (int i = 0; i <= eleCount; i++)
            {
                if (input == dArray [i])
                {
                    check = 1;

                    for (int j = i; j <= eleCount ; j++)
                        dArray[j] = dArray[j+1];

                    eleCount --;

                    if (eleCount == size / 2)           // Shrinks Array if needed
                    {
                        size /= 2;
                        int *temp = new int[size];      // Temporary array of half size
                        temp = dArray;                  // Coping old array to new temporary array
                        delete [] dArray;                  // Deallocation of old array
                        int *dArray = new int [size];   // New Array of half Size
                        dArray = temp;                  // Coping of temporary array (Old Array) to new shrinked array
                        delete [] temp;                    // Deallocation of temporary array

                        cout << endl << "\t Array Shrinked" << endl;
                    }
                }
            }

            if (check != 1)
                cout << "\n\t Not There" << endl;

            break;

        case 'r':
            cout << "\t S: " << size << "   E: " << eleCount << endl;

            break;

        case 'e':         // Program Exit
            delete [] dArray;      // Deallocation of array.
            cout << endl << "Programmed By: " << endl;
            cout << "\t Suyog Adhikari \n\t THA076BEI040" << endl;

            break;

            return 0;

        }
    } while (selection != 5);
}


