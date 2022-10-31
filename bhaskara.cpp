#include <iostream>
#include <cmath>

using namespace std;
int main(){
	float a,b,c,delt,res1,res2;
	
	cout<<"Bhaskara"<<endl
		<<"Ax2+bx+c"<<endl;
	
	cout<<"a = ";
	cin>>a;
	cout<<endl;
	cout<<"b = ";
	cin>>b;
	cout<<endl;
	cout<<"c = ";
	cin>>c;
	cout<<endl;
	cout<<"y= "<<a<<"x2 + "<<b<<"x + "<<c<<endl;
	
	delt= (pow(b,2)-4*a*c);
	
	if(delt>=0){
		res1= (-b+sqrt(delt))/(2*a);
		res2=(-b-sqrt(delt))/(2*a);
		
		cout<<"x'= "<<res1<<endl;
		cout<<"x''= "<<res2<<endl;
	}
	else
	cout<<"No real result"<<endl;
	
	return 0;
}
