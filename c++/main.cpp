#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	float A,B,C;
	setlocale(LC_CTYPE, "Russian") ;
	cout<<"¬ведите число A ";
	cin>>A;
	cout<<"¬ведите число B ";
	cin>>B;
	C=sqrt(pow(A-B,2))+(A-B)*(A-B);
	cout<<"ƒлина отрезка AB="<<C;
	return 0;
}
