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
*/

#include<iostream>
using namespace std;

class calculate{

	public :
		void divison(int a,int b){
			cout<<a/b<<endl;
	
		}
		void subtraction(int x,int y,int z){
			cout<<x-y-z<<endl;
			
			
		}
};
class calculate1{

	public :
		void muliplication(int c,int d,int e,int f){
			cout<<c*d*e*f<<endl;
	
		}
		void addition(int g,int h,int i,int j,int k){
			cout<<g+h+i+j+k<<endl;
			
			
		}
};

int main(){
	calculate c1;
	calculate1 c2;
	
	c1.divison(10,20);
	c1.subtraction(5,6,9);
	c2.muliplication(9,8,7,2);
	c2.addition(87,12,56,96,12);
	
}





