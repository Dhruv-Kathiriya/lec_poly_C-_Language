/*
2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes

T20Match over is 20
TestMatch over is 50

*/
#include<iostream>
using namespace std;

class Cricket{
	public:
	void T20Match(){
		cout<<"T20Match over is 20 "<<endl;
	}
};

class Crickettest : public Cricket{
	public:
	void TestMatch(){
		cout<<"TestMatch over is 450 "<<endl;
	}
	
};

int main(){
	Crickettest c1;
	c1.T20Match();
	c1.TestMatch();
	return 0;
}
