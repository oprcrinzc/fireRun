#include<iostream>
#include<unistd.h>
using namespace std;
class Plot {
	public:
		int width, height, sleep_time;
		int loop = 1;
		Plot(int w, int h, int st){
			width = w;
			height = h;
			sleep_time = st;
		}
		void run(){
			do{
				for(int py=height;py>=-height;py--){
					for(int px=-width;px<=width;px++){
						cout << " ";
					}
					cout << "| " << py << endl;
				}
				usleep(sleep_time*10000);
				system("clear");
			}while(loop==1);
		}
};
