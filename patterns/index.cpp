#include<bits/stdc++.h>
using namespace std;

void print1(int n) {
	for (int i = 0; i < n; ++i) {
		/* code */
		for(int j = 0; j < n; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print2(int n) {
	for (int i = 1; i <= n; ++i) {
		/* code */
		for(int j = 0; j < i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print3(int n) {
	for (int i = 1; i <= n; ++i) {
		/* code */
		for(int j = 1; j <= i; ++j) {
			cout << j << " ";
		}
		cout << endl;
	}
	/*
	1 
	1 2 
	1 2 3 
	1 2 3 4 
	1 2 3 4 5 
	*/
}
void print4(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print5(int n) {
	 for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << j << " ";
        } cout << endl;
    }
}

int main() {
	int n;
	cin >> n;
	print5(n);	
	return 0;
}