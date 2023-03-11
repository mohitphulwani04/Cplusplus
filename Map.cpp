// Topic: Map In C++

//NOTES:
//1.Syntax: map<T!,T2> obj; // where T1 is key type and T2 is value type.
//2. std::map is associative container that store elements in key value combination 
//	where key should be unique, otherwise it overrides the previous value.
//3.It is implement using Self-Balance Binary Search Tree(ACL/Red Black Tree).
//4.It store key value pair in sorted order on the basis of key (A/D).
//5.std::map is generally used in dictionary type problems.

// Example : Dictionary

#include<iostream>
#include<map>
#inlcude<functional>
#include<vector>
using namespace std;

int main(){
	std:;map<string, int> Map;
	// std:;map<string, int, std::greater<String>> Map0; Descending order
	// std:;map<string, int, std::less<>> Map; -> -> Ascending order
	// std:;map<string, vector<int>> Map;
	Map["Chotu"]=909009009; //if vector-> Map["Chotu"].push_back(909009009);
	Map["Ankit"]=987496239;
	Map.insert(std::make_pair("Bot",784848383));// It is not used when vector is declared in a map
	
	//Loop through Map
	for(auto &el1:Map){
		cout << el1.first << " " << el1.second << endl;
	} 
	
	// Access using [] operator
	cout << Map["Chotu"]<< endl;
	return 0;
}
