#include<iostream>
#include"plot.cpp"
#include"text.cpp"
#include<vector>
using namespace std;
int main(){
	Plot p1(60, 9, 3);
	Text text;
	vector<int> pos = {-10,0};
	vector<int> pos2 = {10,0};
	int start_x = -p1.width;
	p1.addVec(text.set('S').toVec(),{start_x,0});
	p1.addVec(text.set('N').toVec(),{start_x+5*1 +1, 0});
	p1.addVec(text.set('A').toVec(),{start_x+5*2 +1, 0});
	p1.addVec(text.set('F').toVec(),{start_x+5*3 +1, 0});
	p1.addVec(text.set('F').toVec(),{start_x+5*4 +1, 0});
	//p1.showVec();
	p1.run2();
}
