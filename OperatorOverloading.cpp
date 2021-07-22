#include<iostream>
using namespace std;
class Complex
{
	int real;
	int imag;
	public:
	Complex()
	{
		real =0;
		imag =0;
	}
	friend ostream& operator << (ostream& out, const Complex& obj);
	friend istream& operator >> (istream& in, Complex& obj);
	
};

ostream& operator <<(ostream& out, const Complex& obj)
{
	out<<obj.real;
	out<<" +i" << obj.imag<<endl;
	return out;
}
istream& operator >> (istream& in, Complex& obj)
{
	cout<<"Enter the real part"<<endl;
	in>>obj.real;
	cout<<"Enter the imaginary part"<<endl;
	in>>obj.imag;
	return in;
}
int main()
{
	Complex c1;
	cin>>c1;
	cout<<"The complex object is ";
	cout<<c1;
	
}
