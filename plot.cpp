#include<iostream>
#include<unistd.h>
#include<vector>
using namespace std;
class Plot {
	public:
		int width, height, sleep_time;
		int loop = 1;
		vector<vector<vector<int>>> vec_list;
		vector<vector<int>> vec_pos;
		Plot(int w, int h, int st){
			width = w;
			height = h;
			sleep_time = st;
		}
		void addVec(vector<vector<int>> vec, vector<int> pos){
			vec_pos.push_back(pos);
			vec_list.push_back(vec);
}
		void showVec(){
			for(int i=0;i<vec_list.size();i++){
				for(int j=0;j<vec_list.at(i).size();j++){
					for(int k=0;k<vec_list.at(i).at(j).size();k++){
						cout << vec_list.at(i).at(j).at(k) << " ";
					}
					 cout << endl;
				}
			}
		}
		void run2() {
		do {
			for (int py = height; py >= -height; py--) {
				for (int px = -width; px <= width; px++) {
					int pointed = 0;
					// Iterate over all vectors in vec_list
					for (int i = 0; i < vec_list.size(); i++) {
						// Get the position for the current vector
						int vec_x = vec_pos[i][0];
						int vec_y = vec_pos[i][1];

						// Check if current (px, py) is within the bounds of the current vector
						if (px >= vec_x && px < vec_x + vec_list[i][0].size() &&
							py >= vec_y && py < vec_y + vec_list[i].size()) {
							
							// Calculate local coordinates within the vector
							int local_x = px - vec_x;
							int local_y = py - vec_y;

							// Check the value at the local coordinates
							if (vec_list[i][local_y][local_x] == 1) {
								pointed = 1;
								break;
							}
						}
					}

					if (pointed == 1) {
						cout << "+";
					} else {
						cout << " ";
					}
				}
				cout << "| " << py << endl;
			}
			for(int i = 0; i < vec_pos.size(); i++){
						vec_pos[i].assign({vec_pos[i][0]+1, vec_pos[i][1]});
					}
			usleep(sleep_time * 10000);
			system("clear");
		} while (loop == 1);
	}
};
