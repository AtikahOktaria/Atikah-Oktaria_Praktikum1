#include <iostream>
#include <cmath>
using namespace std;

double luasLingkaran(double r){
	return M_PI*r*r;	
}

int main(){
	double r;
	
	cin>>r;
	cout<<"Luas Lingkaran : "<<luasLingkaran(r);
	return 0;
	
}
