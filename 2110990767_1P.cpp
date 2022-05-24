#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c;
	float x1,x2;
	cout<<"enter the coeff of x square";
	cin>>a;
	cout<<"enter the coeff of x";
	cin>>b;
	cout<<"enter the constant value";
	cin>>c;
	x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
	x2=(-b-sqrt((b*b)-4*a*c))/(2*a);
	cout<<"roots of equ are"<<x1<<" "<<x2;
	return 0;
}
