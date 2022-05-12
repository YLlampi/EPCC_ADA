#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int max1 = -1;
	int max2 = -1;

	int t;
	for(int j = 0; j < n; j++)
		if(arr[j] > max1) {
			max1 = arr[j];
			t = j;
		}

	int k;
	for(k = 0; k < n; k++){
		if(t != k and arr[k] > max2) max2 = arr[k];
	}

	int max_product = max1 * max2;
	cout << max_product << '\n';	
	
	return 0;
}
