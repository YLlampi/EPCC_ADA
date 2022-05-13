#include <bits/stdc++.h>
using namespace std;

void greatestNumber(vector<int>& array){
    bool isIValTheGreatest;
    
    for(int i = 0; i < array.size(); i++){
	isIValTheGreatest = true;
	for(int j = 0; j < array.size(); j++){
	    if(array[j] > array[i]){
		isIValTheGreatest = false;
	    }
	}
	if(isIValTheGreatest){
	    cout << i << '\n';
	}
    }
}

int main(){
    /*
    - Proposito del codigo:
	Imprimir el indice del mayor numero del arreglo
    - Complejidad:
	O(n*n)
    */
    
    vector<int> array{1,100,7,3,8,4};

    greatestNumber(array);

    return 0;
}
