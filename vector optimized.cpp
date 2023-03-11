// TOPIC: Best way to use Vector in C++:

// Vector = Array(Access time) + Linked list(Dynamically)

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	//v.reserve(1000); // set capacity of vector = 1000.
	for(int i=0; i<32 ; ++i){
		v.push_back(i);
		cout << v.size() << " " << v.capacity() << endl;
	}
	
	return 0;
}
