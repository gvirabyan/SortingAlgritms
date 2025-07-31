#include <iostream>
#include <vector>
#include <string>

using namespace std;

void BubbleSort(vector<int>& vector) {
    
	for(int i = 0;i < vector.size();++i){
		for(int j = 0;j < vector.size()-i-1;++j){
   	 		if(vector[j] > vector[j+1]) {
				int temp = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = temp;

			}
		}
	}


}

int main () {

	vector<int> vec = {1,4,5,7,9}; 	
	
	BubbleSort(vec);

	for(int i = 0;i < vec.size();++i){
   	 	cout<<vec[i]<<endl;
	}
}
