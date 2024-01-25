/*
1. WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition

sion ans  = 3
subtraction ans  = 6
addition ans  = 15
multiplication ans  = 16

*/

#include<iostream>
using namespace std;

class calculate{
	
	public:
		
		void division(int x , int y){
			cout<<"division ans  = "<<x/y<<endl;
		}
		
		void subtraction(int x , int y , int z){
			cout<<"subtraction ans  = "<<x-y-z<<endl;
		}
};

class calculate1{
	
	public:
		
		void multiplication (int x , int y , int z , int u){
			cout<<"multiplication ans  = "<<x*y*z*u<<endl;
		}

		void addition (int x , int y , int z , int u , int v){
			cout<<"addition ans  = "<<x+y+z+u+v<<endl;
		}
};

int main(){
	
	calculate c1;
	calculate1 c2;
	c1.division(15,5);
	c1.subtraction(10,2,2);
	c2.addition(1,2,3,4,5);
	c2.multiplication(2,2,2,2);
	
}
