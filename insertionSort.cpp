#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
	cout << "Arreglo Desordenado" << '\n';
	for(auto i : arr){
		cout << i << ' ';
	}


	for(int i = 0; i < arr.size(); i++){
		int j = i;
		while(arr[j] > arr[j+1] and j >= 0 and i+1 < arr.size()){
			swap(arr[j], arr[j+1]);
			j--;
		}
	}

	cout << "\nArreglo Ordenado" << '\n';

	for(auto i : arr){
		cout << i << ' ';
	}

}

int main(){
	srand(time(NULL));
	int n; cin>>n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		arr[i] = 1 + rand() % 100;

	insertionSort(arr);
	
	return 0;
}
