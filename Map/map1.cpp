#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> myMap;

    // Insert some key-value pairs
    myMap["Apple"] = 50;
    myMap["Banana"] = 20;
    myMap["Mango"] = 30;

    // Print all key-value pairs
    for (auto pair : myMap) {
        cout << pair.first << " : " << pair.second << endl;
    }

    cout<<endl;
    map<int , string> m2;
    m2[1] = "DS" ;
    m2[5] = "C++";
    m2[3]= "OOP";
    // see you can insert m2[1] first then m2[5], then m2[3] in any order you like
    for (auto pair : m2) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}

