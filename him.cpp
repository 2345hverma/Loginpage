#include<iostream>
using namespace std;
class complex
{
private:
int real,imag;
public:
complex(int r=0,int i=0){real=r;imag=i;}
complex operator+(complex const &obj)
{
complex res;
res.real=real+obj.real;
res.imag=imag+obj.imag;
return res;
}
void print()
{
cout<<real<<"+i"<<imag<<endl;
}
};
int main()
{	
complex c1(12,3),c2(4,2);
complex c3=c1+c2;
c3.print();
cout<<"roll no 161210012"<<"\n";
}
