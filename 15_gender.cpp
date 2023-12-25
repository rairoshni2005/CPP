#include <iostream>
#include <string>

using namespace std;
int main(){
 string gender, weather, recommendation ;
 int age ; 

    cout << "Enter your gender (male/female): ";
    cin >> gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the weather (cold/hot): ";
    cin >> weather;

    if (weather == "cold") {
        if (gender == "male") {
            cout << "Wear a jacket, ";
            if (age < 18) {
                cout << "jeans, and sneakers.";
            } else {
                cout << "trousers, and leather shoes.";
            }
        } 
        else if (gender == "female") {
            cout << "Wear a warm coat, ";
            if (age < 18) {
                cout << "leggings, and boots.";
            } else {
                cout << "trousers or a long skirt, and heels or boots.";
            }
        }
    } 
    else if (weather == "hot") {
        if (gender == "male") {
            cout << "Wear a t-shirt, ";
            if (age < 18) {
                cout << "shorts, and sandals.";
            } else {
                cout << "shorts or light trousers, and loafers.";
            }
        } else if (gender == "female") {
            cout << "Wear a light blouse or tank top, ";
            if (age < 18) {
                cout << "shorts or a skirt, and sandals.";
            } else {
                cout <<  "dress or light trousers, and sandals or heels.";
            }
        }
    } 
    else {
        cout << "Invalid weather input.";
    }

    
   
    

    return 0;
}
