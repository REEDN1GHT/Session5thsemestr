#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	float A,B,C;
	setlocale(LC_CTYPE, "Russian") ;
	cout<<"������� ����� A ";
	cin>>A;
	cout<<"������� ����� B ";
	cin>>B;
	C=sqrt(pow(A-B,2))+(A-B)*(A-B);
	cout<<"����� ������� AB="<<C;
	return 0;
}
