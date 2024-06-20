#include<iostream>
#include<unistd.h>
#include<vector>
using namespace std;
class Plot {
	public:
		int width, height, sleep_time;
		int loop = 1;
		vector<vector<vector<int>>> vec_list;
		vector<int> vec_pos;
		Plot(int w, int h, int st){
			width = w;
			height = h;
			sleep_time = st;
		}
		void addVec(vector<vector<int>> vec, vector<int> pos){
		//	vec_list.insert(vec_list.end(), vec.begin(), vec.end());
		//	vec_pos.insert(vec_pos.end(), pos.begin(), pos.end());
			vec_list.push_back(vec);
			vec_pos.push_back(pos);
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
		void run(){
			do{
				for(int py=height;py>=-height;py--){
					for(int px=-width;px<=width;px++){
						int pointed = 0;
						// load vec_list
						for(int i=0;i<vec_list.size();i++){
							for(int j=0;j<vec_list.at(i).size();j++){
								for(int k=0;k<vec_list.at(i).at(j).size();k++){
									if(px==vec_pos.at(i)){
										if(vec_list.at(i).at(j).at(k)==1){
											pointed = 1;	
										}
									}
								}
							}
						}
						if(pointed==1) cout <<"+";
						else cout << " ";
					}
					cout << "| " << py << endl;
				}
				usleep(sleep_time*10000);
				system("clear");
			}while(loop==1);
		}

};
