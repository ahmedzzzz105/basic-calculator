#include<iostream>
using namespace std;

int main() {
    int a , b ;
    cout << " enter the first number : "  << endl;
    cin  >> a ;
    cout << " enter the second  number : "  << endl;
    cin >> b;
    
    
    
   
    
    
    int choice ;
    
    int sum = a+b;
    int difference = a - b;
    int product = a * b;
    

    cout << "welcome to online calculator" << endl;
    cout << "pls select the operation you want to perform"  <<   endl;
    cout << "1. addition\n" << "2. subtraction\n" <<  "3. multiplication\n" << "4. division\n" << endl;
    cin >> choice ;
    cin>> a;
    if (choice == 1){
    cout << " the sum is : " << sum << endl;
     } else if (choice == 2){
    cout << " the difference is : " << difference << endl;
     } else if (choice == 3){
    cout << " the product is : " << product << endl;
     } else if (choice == 4 ){ 
          if ( b == 0) {
             cout << " cannot divide by zero" << endl;
         } else {
              int quotient =  a / b;
    
              cout << " the quotient is : " << quotient << endl;
         }   
      } else {
           cout << "invalid choice" << endl;
      }
        return 0;
}
    
     
