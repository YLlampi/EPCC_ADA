#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& array){
    for(int i = 0; i < array.size(); i++){
	for(int j = 0; j < array.size(); j++){
	    if(i != j and array[i] + array[j] == 10){
		return true;
	    }
	}
    }
    return false;
}

int main(){
    /*
    - Proposito del codigo:
	Encontrar dos elementos que sumados de 10
    - Complejidad:
	O(n*n)
    */
    
    vector<int> array{1,7,3,8,5,3,9};

    cout << twoSum(array) << '\n';

    return 0;
}
