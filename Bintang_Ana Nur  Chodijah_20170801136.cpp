#include <iostream>
using namespace std;
int main(){
	int p,q,r,s;
	
	cout << "Masukan Jumlah Bintang	: ";
	cin >> s;
	for(p=1;p<=s;p++){
		cout << endl;
		for(q=s;q>=p;q--){
			cout << "*" << " ";
		}
		for(r=1;r<=q;r++){
			cout <<"    ";
		}
		for(r=s;r>=p;r--){
			cout <<"*"<<" ";
		}
		for(q=1;q<=r;q++){
			cout <<"    ";
		}
	}
	
	for(p=1;p<=s;p++){
		cout << endl;
		for(q=1;q<=p;q++){
			cout <<"*"<<" ";
		}
		for(r=s;r>=q;r--){
			cout <<"  ";
		}
		for(r=s;r>=q;r--){
			cout <<"  ";
		}
		for(q=1;q<=p;q++){
			cout <<"*"<<" ";
		}
	}
}
