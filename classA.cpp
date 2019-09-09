
#include <iostream>

using namespace std;

class A{
	private:
		int A1;
		float A2;
	public:	
		void MA1();
		void MA2();
		void MA3();
		void setA(int a1, float a2);
		int getA1();
		float getA2();
};
void A::setA(int a1, float a2){
	A1= a1;
	A2= a2;
}

int A::getA1(){
	return A1;
}

float A::getA2(){
	return A2;
}
void A::MA1(){
	cout<<"MA1"<<endl;
}
void A::MA2(){
	cout<<"MA2"<<endl;
}

void void::MA3(){
	cout<<"Alteração a classe A partir do clone"
}