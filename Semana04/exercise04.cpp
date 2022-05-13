#include <bits/stdc++.h>
using namespace std;

bool find_needle(string needle, string haystack){
    int needle_index = 0;
    int haystack_index = 0;
    bool found_needle;
    while(haystack_index < haystack.size()){
	if(needle[needle_index] == haystack[haystack_index]){
	    found_needle = true;
	    while(needle_index < needle.size()){
		if(needle[needle_index] != haystack[haystack_index + needle_index]){
		    found_needle = false;
		    break;
		}
		needle_index += 1;
	    }
	    if(found_needle) return true;
	    needle_index = 0;
	}
	haystack_index += 1;
    }
    return false;
}

int main(){
    /*
    - Proposito del codigo:
	Averiguar si una cadena esta contenida dentro de otra
    - Complejidad:
	O(n*m)
    */
    
    string needle = "fgh";
    string haystack = "abcdefghi";

    cout << find_needle(needle, haystack) << '\n';;
    return 0;
}
