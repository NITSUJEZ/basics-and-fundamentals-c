#include <iostream>
#include <string>
using namespace std;

class Shoes {
public:
    string brand;
    int size;
    string color;
    double price;
    string typeOfShoes;
    
    Shoes(string b, int s, string c, double p, string t) {
        brand = b;
        size = s;
        color = c;
        price = p;
        typeOfShoes = t;
    }
    
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Size: " << size << endl;
        cout << "Color: " << color << endl;
        cout << "Price: $" << price << endl;
        cout << "Type of Shoes: " << typeOfShoes << endl << endl;
    }
};

int main() {
    Shoes shoes1("Nike", 13, "Black", 1110.00, "Running");
    Shoes shoes2("Adidas", 12, "Gray", 1300.54, "Walking");
    
    cout << "Shoe 1 Details:" << endl;
    shoes1.displayInfo();
    
    cout << "Shoe 2 Details:" << endl;
    shoes2.displayInfo();
    
    return 0;
}
