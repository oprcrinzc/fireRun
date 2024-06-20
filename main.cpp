#include<iostream>
#include"plot.cpp"
#include"text.cpp"
#include<vector>
using namespace std;
int main(){
	Plot p1(49, 9, 3);
	Text A('A');
	vector<int> pos = {0,0};
	//cout << typeid(A.toVec()) << endl;
	p1.addVec(A.toVec(),pos);
	//p1.showVec();
	p1.run();
}
