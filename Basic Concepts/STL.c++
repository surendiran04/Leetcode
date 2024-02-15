#include<bits/stdc++.h>
// #include <iostream>
// #include <utility>
 #include <vector>
using namespace std;

//STL is one of the unique abilities of C++ which makes it stand out from every other programming language. 
//STL stands for standard template library which contains a lot of pre-defined templates in terms of containers
// and classes which makes it very easy for
//developers or programmers to implement different data structures easily without having to write complete code
// and worry about space-time complexities.

//disadvantages
//It is not a standard header file of C++ library.It includes lots of unnecessary stuff and increases compilation time.
//It is non-portable.

//A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar 
//functions, classes, variables etc. with the same name available in different libraries. 

//Pairs
void explainPair(){
pair<int, int> p1 = {1, 3};
cout << p1. first << " " << p1.second<<endl;
pair<int, pair<int, int>> p2 = {1, {3, 4}};
cout << p2. first << " " << p2.second.second << " " << p2.second.first<<endl;
pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};
cout << arr[1].second;
}

//Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or 
//deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous
// storage so that they can be accessed and traversed using iterators.

// vector.begin() – Returns an iterator pointing(address) to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from
//last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.


// assign() – It assigns new value to the vector elements by replacing old ones
// push_back() – It push the elements into a vector from the back
// pop_back() – It is used to pop or remove elements from a vector from the back.
// insert() – It inserts new elements before the element at the specified position
// erase() – It is used to remove elements from a container from the specified position or range.
// swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
// clear() – It is used to remove all the elements of the vector container

void explainVector(){
 vector<int> v={1,2,3,4,5};
//  v.assign(5,10); //assigning 5 10's to v

 vector< pair<int, int>> vec;
 vec.push_back({1,2});
 vec.emplace_back(3,4);    //faster than push_back, doesn't need to pass the pair as objects

 vector<int> v2(v); //copying vectors of same data type
//  cout<<v2[0]<<endl;
//   cout<<vec[1].first;
 
 for(auto it= vec.begin();it!=vec.end();it++){ //instead of auto we can also use vector<int>::iterator
    cout<<(*(it)).first<<" ";
 }
 cout<<endl;

 v2.erase(v2.begin()+1); //pass the address that needed to be deleted
 for(auto it= v2.begin();it!=v2.end();it++){ //instead of auto we can also use vector<int>::iterator
    cout<<*(it)<<" ";
 }
} 

int main(){

//explainPair();
explainVector();

return 0;
}




