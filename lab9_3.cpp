#include <iostream>
using namespace std;

int main(){
    int age ,height,money ;
    cout << "Enter your age: ";
    cin >> age ;

    if(age <= 20){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 160){
            cout << "Your status = UNFRIEND";
        }else if(height <175){
             cout << "Your status = FRIEND" ;
        }else{
            cout << "Enter your property: ";
            cin >> money; 
            if(money > 69000000){
                cout << "Your status = MARRIED" ;
            }else{
                cout << "Your status = ONE-NIGHT-STAND";
            }
        }


    }else if(age < 30){
        cout << "Enter your property: ";
        cin >> money; 
        if(money > 10000000){
                cout << "Your status = BEST FRIEND";      
            }else{
                cout << "Your status = UNFRIEND" ;
            }
        }else{
        cout << "Your status = UNFRIEND" ;
        }
}



