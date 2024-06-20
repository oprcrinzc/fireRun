#include<iostream>
#include<vector>
using namespace std;
int main(){

	vector<vector<int>> vec = {{1, 0},
				   {0, 1}};
	// for(int i=0;i<vec.size();i++){
	// 	for(int j=0;j<vec.at(i).size();j++){
	// 		int r = vec.at(i).at(j);
	// 		if(r>0) cout << "+";
	// 		else if(r<=0)cout << ".";
	// 	}
	// 	cout << endl;
	// }

	vector<int> b;
	vector<int> x;
	// int g =0;
	for(int a=0;a<2;a++){
		// for(const vector<int>& i: vec){
		for(int g=0;g<2;g++) b.push_back(vec[a][g]);
		// }
		// if(g>2) g=0;
		for(const int i:b) cout << i;
		b.clear();
	}

}
