#include <iostream>

using namespace std;

int main(){
   
   double height, weight, bmi;
   
   std::cout << "Enter your current height (m): " << "\n";
   std::cin >> height;
   
   std::cout << "Enter you crurrent weight(kg): " << "\n";
   std::cin >> weight;
   
   bmi = weight / (height * height);
   
   std::cout << "Your BMI is" << bmi <<"\n";
   
   
   
   
   
   
   
   
}
