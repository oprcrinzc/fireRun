#include<vector>
class Text {
	public:
		char character;
		vector<int> Vec;
		Text(char c){
			character = c;
			switch(character){
				case 'A':
					Vec = {{0,0,1,0,0},
					       {0,1,0,1,0},
					       {1,0,0,0,1},
					       {1,0,0,0,1},
					       {1,1,1,1,1},
					       {1,0,0,0,1},
					       {1,0,0,0,1}};break;
				default: break;
		}}
		vector<int> getVec() return Vec;
};
