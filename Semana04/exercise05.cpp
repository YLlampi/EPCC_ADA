#include <bits/stdc++.h>
using namespace std;

int pick_resume(vector<int>& resumes){
    string eliminate = "top";

    while(resumes.size() > 1){
	int length = resumes.size();
	if(eliminate == "top"){
	    resumes.assign(resumes.begin() + length/2, resumes.end());
	    eliminate = "bottom";
	}
	else if(eliminate == "bottom"){
	    resumes.assign(resumes.begin(), resumes.begin() + length/2);
	    eliminate = "top";
	}
    }
    return resumes[0];
}

int main(){
    /*
    - Proposito del codigo:
	Eliminar mitad superior o inferior(alternado) del arreglo hasta quedar
	con un solo elemento
    - Complejidad:
	log(n)
    */
    vector<int> resumes{1,9,2,8,4,7,5,6};

    cout << pick_resume(resumes) << '\n';

    return 0;
}
