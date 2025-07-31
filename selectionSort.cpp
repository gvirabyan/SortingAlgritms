#include <iostream>
#include <vector> 
#include <string> 

using namespace std;

vector<int> selectionSort(vector<int>& vec){
    
	for(int i = 0;i < vec.size() ;++i){
   		int minIndex = i;
		for(int j = i + 1;j < vec.size();++j){
   			 if(vec[j] > vec[minIndex]){
			 	minIndex = j;	
			 }
		}
		int temp = vec[minIndex];
		vec[minIndex] = vec[i];
		vec[i] = temp;
	}
	return vec;
}

int main() {
	
	vector<int> vec = {5,4,8,3,5,2};
	vector<int> sortedVec = selectionSort(vec);

   for(int i = 0;i < sortedVec.size() ;++i){
   		cout<<sortedVec[i]<<endl;
   }
	return 0;
}
