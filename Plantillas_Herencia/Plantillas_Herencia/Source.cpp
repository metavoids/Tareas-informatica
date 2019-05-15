#include <iostream>
#include <vector>
using namespace std;

template <class T>class Alg {
public:
	virtual T solve(T a,T b)=0;
};
template <class T>class Alg_B:public Alg<T> {
public:
	T solve(T a,T b) { return a + b; }
};
template <class T>class Alg_A :public Alg<T> {
public:
	T solve(T a,T b) { return b- a; }
};
void main(){
	Alg_A<float> numA;
	Alg_B<int> numB;
	
	cout << numA.solve(10.1, 20.3) << endl << numB.solve(10, 20) << endl;
	system("pause");

}