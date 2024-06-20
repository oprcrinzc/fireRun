#include<iostream>
#include"plot.cpp"
#include"text.cpp"
using namespace std;
int main(){
	Plot p1(49, 9, 3);
	Text A('A');
	p1.addVec(A.toVec(), {0, 0});
	//p1.showVec();
	//p1.run();
}
