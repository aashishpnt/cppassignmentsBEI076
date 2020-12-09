#include <iostream>

using namespace std;

class item1
{
private:
    int code, quantity;
    float price;
public:
    void set_item1(int code, int quantity, float price)
    {
        this->code = code;
        this->price = price;
        this->quantity = quantity;
    }

    int get_code(){return code;}
    int get_quantity(){return quantity;}
    float get_price(){return price;}

    void display()
    {
        cout << "Code : " << code << endl;
        cout << "Price :" << price << endl;
        cout << "Quantity :" << quantity << endl << endl;
    }
};

class item2
{
    int code;
    float value;
public:
    item2()
    {
        value = 0;
        code = 0;
    }

    item2(item1 I1)
    {
        code = I1.get_code();
        value = I1.get_price()*I1.get_quantity();
    }

    void display()
    {
        cout << "Code : " << code << endl;
        cout << "Value :" << value << endl;
    }
};

int main()
{
    int code, quantity;
    float price;

    item1 I1;

    cout << "Enter Code of the product: ";
    cin >> code;
    cout << "Enter Price of the product: ";
    cin >> price;
    cout << "Enter Quantity: ";
    cin >> quantity;

    I1.set_item1(code,quantity,price);

    cout <<endl <<"Item1 :" << endl;
    I1.display();

    item2 I2 = I1;

    cout << "Equivalent Item2 : " << endl;
    I2.display();

    return 0;
}
