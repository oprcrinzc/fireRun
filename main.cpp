#include<iostream>
#include"plot.cpp"
#include"text.cpp"
#include<vector>
using namespace std;
int main(){
	Plot p1(49, 9, 3);
	Text O('O');
	Text P('P');
	Text R('R');
	Text C('C');
	vector<int> pos = {-10,0};
	vector<int> pos2 = {10,0};
	//cout << typeid(A.toVec()) << endl;
	p1.addVec(O.toVec(),pos);
	p1.addVec(P.toVec(),vector<int> {-2, 0});
	p1.addVec(R.toVec(),vector<int> {5, 0});
	p1.addVec(C.toVec(),vector<int> {13, 0});
	//p1.showVec();
	p1.run2();
}
