//SET
// What is a set?
// A set in STL is a container that stores unique elements in a particular order IMP - SORTED ORDER. 
//Every operation on a set takes O(1) complexity in the average case and takes O(n) 
//in the worst case.

// Syntax:
// set<object_type> variable_name;
// Example:
// set<int> s;
// set<string> str;
// Functions in set:
// insert() – to insert an element in the set.
// set<int> s;
// s.insert(1);
// s.insert(2);
// begin() – return an iterator pointing to the first element in the set.
// s.begin();
// end() – returns an iterator to the theoretical element after the last element.
// s.end();
// count() – returns true or false based on whether the element is present in the set or not.
// set<int> s;
// s.insert(1);
// s.insert(2);
// s.count(2); //returns true
// clear() – deletes all the elements in the set.
// s.clear();
// find() – to search an element in the set.
// set<int> s;
// s.insert(1);
// s.insert(2);
// if(s.find(2)!=s.end())
// cout<<"true"<<endl;
// erase() – to delete a single element or elements between a particular range.
// s.erase();
// size() – returns the size of the set.
// s.size();
// empty() – to check if the set is empty or not.
// s.empty();

//CODE:
#include<bits/stdc++.h>

using namespace std;

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    int x; cin >> x;
    s.insert(x);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
//   cout << endl;
//   int n = 2;
//   if (s.find(2) != s.end())
//     cout << n << " is present in set" << endl;

//   s.erase(s.begin());
//   cout << "Elements after deleting the first element: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;

//   cout << "The size of the set is: " << s.size() << endl;

//   if (s.empty() == false)
//     cout << "The set is not empty " << endl;
//   else
//     cout << "The set is empty" << endl;
//   s.clear();
//   cout << "Size of the set after clearing all the elements: " << s.size();
//     cout<<endl<<"before erasing 4 : "<<s.size()<<endl;
//     s.erase(4);// in order to erase a particular element we write just s.erase(value)
//     cout<<endl<<"after erasing 4 : ";
//     for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//     cout<<s.size();
// }

// WE CAN ALSO DO "FOR EACH LOOP"
//  for(auto it : data_structure_name){
//     cout<< it; // here in this we are not suppose  to do *it because it is not an iterator here it is the actual value
//  }

// example:
// 1 1 1 2 2 3 3 3 4 4
// Elements present in the set: 1 2 3 4 
// The size of the set is: 4

// TC: O(LOG N) for insertion, erasing

// QUESTION: FROM 2 DELETE 3 MORE ELEMENTS(2 inclusive)
// 1 1 2 2 3 3 4 4 5 6

// SOLN: auto it = s.find(2); -> it will point to 2
// s.erase(it, it + 4); note that (it) is inclusive but (it + 4) is exclusive
//TC:erasing m elements will  be O(m X logn)

// -------GUESS WHAT-----------
// WE CAN NOT DO it+4 😂😂😶‍🌫️

// ALTERNATE WAY:
// auto jt =it;
// for(int i=0;i<3;i++){
//     jt++;
// }
// st.erase(it, jt);




// ----------------------UNORDERED SET------------------------------------------

// What is an unordered set?
// short ans- "constant time" + "unique elements" + "no particular order"

// An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

// Syntax:
// unordered_set<object_type> variable_name;
// Example:
// unordered_set<int> s;
// unordered_set<string> str;
// Functions in unordered set:
// insert() - to insert an element in the unordered set.
// unordered_set<int> s;
// s.insert(1);
// s.insert(2);
// begin() - return an iterator pointing to the first element in the unordered set.
// s.begin();
// end() - returns an iterator to the theoretical element after the last element.
// s.end();
// count() - it returns 1 if the element is present in the container otherwise 0.
// unordered_set<int> s;
// s.insert(1);
// s.insert(2);
// s.count(2); //returns true
// clear() - deletes all the elements in unordered set.
// s.clear();
// find() - to search an element in the unordered set.
// unordered_set<int> s;
// s.insert(1);
// s.insert(2);
// if(s.find(2)!=s.end())
// cout<<"true"<<endl;
// erase() - to delete a single element or elements between a particular range.
// s.erase();
// size() - returns the size of the unordered set.
// s.size();
// empty() - to check if the unordered set is empty or not.
// s.empty();

//CODE:
// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   unordered_set < int > s;
//   for (int i = 1; i <= 10; i++) {
//     s.insert(i);
//   }

//   cout << "Elements present in the unordered set: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;
//   int n = 2;
//   if (s.find(2) != s.end())
//     cout << n << " is present in unordered set" << endl;

//   s.erase(s.begin());
//   cout << "Elements after deleting the first element: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;

//   cout << "The size of the unordered set is: " << s.size() << endl;

//   if (s.empty() == false)
//     cout << "The unordered set is not empty " << endl;
//   else
//     cout << "The unordered set is empty" << endl;
//   s.clear();
//   cout << "Size of the unordered set after clearing all the elements: " << s.size();
// }


//~~~~~~~~~~~~~~~~~~ MULTI SET ~~~~~~~~~~~~~~~~~~~~~~~
// SHORT ANS - "sorted order" + "duplicate elements allowed, MEANS NOT UNIQUE"
// TC: O(log n) for insertion, erasing

// A multiset in STL is a container that stores elements in a particular order and allows duplicate elements.

// Syntax:
// multiset<object_type> variable_name;

// Example: LET S = [1, 1, 1, 2, 2, 3, 3, 3, 4, 4]
// s.count(1); // returns 3
// s.count(2); // returns 2

//QUSTION: HOW CAN WE ERASE ALL 1s FROM THE MULTISET
// SOLN: s.erase(1); // erases all occurrences of 1

//QUESTION: HOW CAN WE ERASE ONLY FIRST OCCURRENCE OF 1s FROM THE MULTISET
// SOLN: auto it = s.find(1); // it will point to the first occurrence of 1
// s.erase(it); // erases the first occurrence of 1 OR s.erase(s.find(1));