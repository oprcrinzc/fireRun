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
				case 'O':
					cout << "O";
					Vec = {{0,1,1,1,0},
					       {1,1,0,1,1},
					       {1,0,0,0,1},
					       {1,0,0,0,1},
					       {1,0,0,0,1},
					       {1,0,0,0,1},
					       {0,1,1,1,0}};break;
				case 'R':
					cout << "R";
					Vec = {{1,1,1,1,0},
					       {1,1,0,1,1},
					       {1,0,0,0,1},
					       {1,1,1,1,1},
					       {1,0,1,0,0},
					       {1,0,0,1,0},
					       {1,0,0,0,1}};break;
				case 'P':
					cout << "P";
					Vec = {{1,1,1,1,0},
					       {1,1,0,1,1},
					       {1,0,0,0,1},
					       {1,1,1,1,0},
					       {1,0,0,0,0},
					       {1,0,0,0,0},
					       {1,0,0,0,0}};break;
				case 'C':
					cout << "C";
					Vec = {{0,1,1,1,0},
					       {1,1,0,0,1},
					       {1,0,0,0,0},
					       {1,0,0,0,0},
					       {1,0,0,0,0},
					       {1,0,0,0,1},
					       {0,1,1,1,0}};break;
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
