#include<vector>
class Text {
	public:
		//char character;
		vector<vector<int>> Vec;
		Text(char c){
			//character = c;
			switch(c){
				case 'A':
					cout << "A";
					Vec = {{0,0,1,0,0},
					       {0,1,0,1,0},
					       {1,0,0,0,1},
					       {1,0,0,0,1},
					       {1,1,1,1,1},
					       {1,0,0,0,1},
					       {1,0,0,0,1}};break;
				default: break;
		}}
		vector<vector<int>> toVec(){ return Vec;}
		void show(){
			for(int i=0;i<Vec.size();i++){
				for(int j=0;j<Vec.at(i).size();j++){
				cout << Vec.at(i).at(j) <<" ";}
				cout << endl;
			}
		}
};
