#include<iostream>
#include<vector>
using namespace std;
int main(){

	vector<vector<int>> vec = {{1, 0},
				   {0, 1}};
	for(int i=0;i<vec.size();i++){
		for(int j=0;j<vec.at(i).size();j++){
			int r = vec.at(i).at(j);
			if(r>0) cout << "+";
			else if(r<=0)cout << ".";
		}
		cout << endl;
	}

}
