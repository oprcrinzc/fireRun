#include<vector>
class Text {
	public:
		//char character;
		vector<vector<int>> Vec;
		Text& set(char c){
			//character = c;
			switch(c){
				// case 'A':
				// 	cout << "A";
				// 	Vec = {{0,0,1,0,0},
				// 	       {0,1,0,1,0},
				// 	       {1,0,0,0,1},
				// 	       {1,0,0,0,1},
				// 	       {1,1,1,1,1},
				// 	       {1,0,0,0,1},
				// 	       {1,0,0,0,1}};break;
				// case 'O':
				// 	cout << "O";
				// 	Vec = {{0,1,1,1,0},
				// 	       {1,1,0,1,1},
				// 	       {1,0,0,0,1},
				// 	       {1,0,0,0,1},
				// 	       {1,0,0,0,1},
				// 	       {1,0,0,0,1},
				// 	       {0,1,1,1,0}};break;
				// case 'R':
				// 	cout << "R";
				// 	Vec = {{1,1,1,1,0},
				// 	       {1,1,0,1,1},
				// 	       {1,0,0,0,1},
				// 	       {1,1,1,1,1},
				// 	       {1,0,1,0,0},
				// 	       {1,0,0,1,0},
				// 	       {1,0,0,0,1}};break;
				// case 'P':
				// 	cout << "P";
				// 	Vec = {{1,1,1,1,0},
				// 	       {1,1,0,1,1},
				// 	       {1,0,0,0,1},
				// 	       {1,1,1,1,0},
				// 	       {1,0,0,0,0},
				// 	       {1,0,0,0,0},
				// 	       {1,0,0,0,0}};break;
				// case 'C':
				// 	cout << "C";
				// 	Vec = {{0,1,1,1,0},
				// 	       {1,1,0,0,1},
				// 	       {1,0,0,0,0},
				// 	       {1,0,0,0,0},
				// 	       {1,0,0,0,0},
				// 	       {1,0,0,0,1},
				// 	       {0,1,1,1,0}};break;
				// default: break;
				case 'A': Vec = {{0,0,1,0,0},
                          {0,1,0,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,1,1,1,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1}};break;
        case 'B': Vec = {{1,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,1,1,1,0}};break;
        case 'C': Vec = {{0,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,1},
                          {0,1,1,1,0}};break;
        case 'D': Vec = {{1,1,1,0,0},
                          {1,0,0,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,1,0},
                          {1,1,1,0,0}};break;
        case 'E': Vec = {{1,1,1,1,1},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,1,1,1,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,1,1,1,1}};break;
        case 'F': Vec = {{1,1,1,1,1},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,1,1,1,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0}};break;
        case 'G': Vec = {{0,1,1,1,1},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,1,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {0,1,1,1,0}};break;
        case 'H': Vec = {{1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,1,1,1,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1}};break;
        case 'I': Vec = {{1,1,1,1,1},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {1,1,1,1,1}};break;
        case 'J': Vec = {{1,1,1,1,1},
                          {0,0,0,1,0},
                          {0,0,0,1,0},
                          {0,0,0,1,0},
                          {0,0,0,1,0},
                          {1,0,0,1,0},
                          {0,1,1,0,0}};break;
        case 'K': Vec = {{1,0,0,0,1},
                          {1,0,0,1,0},
                          {1,0,1,0,0},
                          {1,1,0,0,0},
                          {1,0,1,0,0},
                          {1,0,0,1,0},
                          {1,0,0,0,1}};break;
        case 'L': Vec = {{1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,1,1,1,1}};break;
        case 'M': Vec = {{1,0,0,0,1},
                          {1,1,0,1,1},
                          {1,0,1,0,1},
                          {1,0,1,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1}};break;
        case 'N': Vec = {{1,0,0,0,1},
                          {1,1,0,0,1},
                          {1,0,1,0,1},
                          {1,0,0,1,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1}};break;
        case 'O': Vec = {{0,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {0,1,1,1,0}};break;
        case 'P': Vec = {{1,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,1,1,1,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0}};break;
        case 'Q': Vec = {{0,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,1,0,1},
                          {0,1,1,1,1}};break;
        case 'R': Vec = {{1,1,1,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,1,1,1,0},
                          {1,0,1,0,0},
                          {1,0,0,1,0},
                          {1,0,0,0,1}};break;
        case 'S': Vec = {{0,1,1,1,1},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {0,1,1,1,0},
                          {0,0,0,0,1},
                          {0,0,0,0,1},
                          {1,1,1,1,0}};break;
        case 'T': Vec = {{1,1,1,1,1},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0}};break;
        case 'U': Vec = {{1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {0,1,1,1,0}};break;
        case 'V': Vec = {{1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {0,1,0,1,0},
                          {0,0,1,0,0}};break;
        case 'W': Vec = {{1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,0,0,1},
                          {1,0,1,0,1},
                          {1,1,0,1,1},
                          {1,0,0,0,1}};break;
        case 'X': Vec = {{1,0,0,0,1},
                          {1,0,0,0,1},
                          {0,1,0,1,0},
                          {0,0,1,0,0},
                          {0,1,0,1,0},
                          {1,0,0,0,1},
                          {1,0,0,0,1}};break;
        case 'Y': Vec = {{1,0,0,0,1},
                          {1,0,0,0,1},
                          {0,1,0,1,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0},
                          {0,0,1,0,0}};break;
        case 'Z': Vec = {{1,1,1,1,1},
                          {0,0,0,0,1},
                          {0,0,0,1,0},
                          {0,0,1,0,0},
                          {0,1,0,0,0},
                          {1,0,0,0,0},
                          {1,1,1,1,1}};break;
        default: break;
		}return *this;}
		vector<vector<int>> toVec(){ return Vec;}
		void show(){
			for(int i=0;i<Vec.size();i++){
				for(int j=0;j<Vec.at(i).size();j++){
				cout << Vec.at(i).at(j) <<" ";}
				cout << endl;
			}
		}
};
