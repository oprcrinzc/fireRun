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
		//	vec_pos.insert(vec_pos.end(), pos.begin(), pos.end());
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
		void run(){
			do{
				for(int py=height;py>=-height;py--){
					for(int px=-width;px<=width;px++){
						int pointed = 0;
						int b = 0;
						int w_x = 0;
						for(int i=0;i<vec_list.size();i++){
							for(int j=0;j<vec_list.at(i).size();j++){
								for(int k=0;k<vec_list.at(i).at(j).size();k++){
									pointed =  vec_list[i][j][w_x];
									b = 1;
									break;
								}if(b==1) break;
							}if(b==1) break;
							cin >> w_x;
						}
						//cin >> w_x;
						w_x+=1;
						if(w_x>5) w_x = 0;
						// load vec_list
						// end load vec_list
						/*
						for(int i=0;i<vec_list.size();i++){
							if(pointed==1) break;
							for(int j=0;j<vec_list.at(i).size();j++){
								if(pointed==1) break;
								for(int k=0;k<vec_list.at(i).at(j).size();k++){
									if(pointed==1) break;
									int cx = (px-vec_list.at(i).at(j).size());
									int cy = (py-vec_list.at(i).size());
									//if(cx==cy) cout << cx-cy <<"_";
									//if(px-vec_pos.at(i).at(0) >0 && px-vec_pos.at(i).at(0) <= 5){
									if(px<vec_pos.at(i).at(0) + 5 && px>=vec_pos.at(i).at(0) && py<vec_pos.at(i).at(1)+7 && py>=vec_pos.at(i).at(1)){
										
										//cout << vec_list.at(i).at(j).at(k);
										if(pointed==1) break;
										if(vec_list.at(i).at(j).at(k)==1){
											pointed = 1;
											//cout << vec_list.at(i).at(j).at(k);
											break;
										}
									}
								}
							}
						}*/
						if(pointed==1) cout <<"+";
						else cout << " ";
						//cout << " ";
						pointed =0;
					}
					cout << "| " << py << endl;
				}
						showVec();
				usleep(sleep_time*10000);
				system("clear");
			}while(loop==1);
		}

};
