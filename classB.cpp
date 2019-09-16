#include <iostream>

using namespace std;


class B{
	private:
		int B1;
		float B2;
	public:
		void MB1();
		void MB2();
		void setB(int b1, float b2);
		int getB1();
		float getB2();		
		void MB3();

};

void B::setB(int b1, float b2){
	B1= b1;
	B2= b2;
}

int B::getB1(){
	return B1;
}

float B::getB2(){
	return B2;
}
void B::MB1(){
	cout<<"MB1"<<endl;
}
void B::MB2(){
	cout<<"MB2"<<endl;
}
void B::MB3(){
	cout<<"MB3"<<endl;
}
