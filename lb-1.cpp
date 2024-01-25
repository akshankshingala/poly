/*
2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes
*/
#include<iostream>
using namespace std;

class cricket{

	public :
		void T20(){
			cout<<"20 over"<<endl;
	
		}
};
class crickettest : public cricket
{

public :
		void test(){
			cout<<"450 over"<<endl;
		}
	};
	
	int main(){
		crickettest c1;
		c1.T20();
		c1.test();
		return 0;
	}
