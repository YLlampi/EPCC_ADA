#include <bits/stdc++.h>
using namespace std;

void every_other(vector<int>& array){
    for(int i = 0; i < array.size(); i++){
	if(i%2 == 0){
	    for(int j = 0; j < array.size(); j++){
		cout << array[i] + array[j] << ' ';
	    }
	    cout << '\n';
	}
    }
}

int main(){
    /*
    - Proposito del Codigo:
	Si el indice es par, sumar el elemento del indice con los demas elementos
    - Complejidad
	O(n*n)
    */

    vector<int> array{1,7,3,9,6,2,0};
    
    for(auto i : array)
	cout << i << ' ';
    cout << '\n';

    every_other(array);

    return 0;
}
