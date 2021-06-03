/*Adriel A. Okolo
Lab2 program2 2/9/2021
program that does calculations while using a while loop*/

//library files
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   int num1, num2, x,op;
   char i;

   


do{
   cout << "Please choose your option:"<<endl;
          cout << "1 = Addition"<<endl;
          cout<< "2 = Subtraction"<<endl;
           cout <<"3 = Multiplication"<<endl;
           cout <<"4 = Division" <<endl;
           cout <<"5 = modules"<<endl;  
   cin >> op;

     
   

 //switch statmement
   switch (op)
   {
      //Addition
      case 1:
         cout << "Enter two numbers: "<<endl;
         cin >> num1 >> num2;
         x = num1 + num2;
         cout << "Sum = " << x<<endl;;
         break;

      //Subtraction
      case 2:
         cout << "Enter two numbers: "<<endl;
         cin >> num1 >> num2;
         x = num1 - num2;
         cout << "Subtraction = " << x << endl;
         break;

      //Multiplication
      case 3:
         cout << "Enter two numbers: "<<endl;
         cin >> num1 >> num2;
         x = num1 * num2;
         cout << "Product = " << x <<endl;;
         break;

      //Division
      case 4:
         cout << "Enter 2 Numbers: "<<endl;;
         cin >> num1 >> num2;
         x = num1 / num2;
         cout << "division = " << x << endl;;
         break;

      //modules
      case 5:
         cout << "Enter 2 numbers: "<<endl;;
         cin >> num1 >> num2;
         x = fmod(num1,num2);
         cout << "modules = " << x;
         break;

    
      default: cout << "please enter a number 1-5"<<endl;;
      break;
      return 0;
      
      
   }
   
   cout << "please enter enter 'Y' to continue after first calculation "<<endl;
      cin >> i;
   }
   
   while (i == 'Y');
   cout << "thanks, please run calulator again."<<endl;
   
return 0;
   }