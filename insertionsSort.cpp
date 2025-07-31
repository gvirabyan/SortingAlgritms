#include <iostream>
#include <vector>

using namespace std;

vector<int>& insertionSort(vector<int>& vector){
	for(int i = 1;i < vector.size();++i){
		for(int j = i;j>0;--j){
   	 		if(vector[j] < vector[j-1]) {
				swap(vector[j],vector[j-1]);
			}
			else {
    		    break;
			}
		}
	}



	return vector;	
}

int main () {
   
	vector<int> vector = {1,5,9,6,7,10,9};
	insertionSort(vector);
	for(int i = 0;i < vector.size();++i){
  		cout<<vector[i]<<" ";
	}
}
