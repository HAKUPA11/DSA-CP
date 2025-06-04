#include<bits/stdc++.h>
using namespace std;
//basically stl in cpp is mainly into four imp parts
// CONTAINERS
// ITERATORS
// ALGORITHMS
// FUNCTORS

// C O N T A I N E R S
// containers are pre implemented data structures written in stl, there are more
//containers in stl however i only wrote those which are imp for CP

// S E Q U E N T I A L   C O N T A I N E R S
//just like arrays which implements sequentially
// vectors, stacks, queue, pair(not a container, it is rather a class , just i wrote it here)

// O R D E R E D
// static_assert those in which values are stored in sorted order
// maps, multimap, set, multiset

// U N O R D E R E D
// based on hashing algorithms, in which values are hashed and stores things
// unordered map, unordered set

// N E S T E D   C O N T A I N E R 
// LIKE
// vector< vector <int>>
// map<int, vector <int>>
// set<pair<int, string>>
// vector<map<int, set<int>>>




// P A I R S
// pair<data_type1,data_type2>
// we can make pairs of either two data types or even two containers
int main(){
    pair<int, string> p;
    // there are two ways to put values in pairs
    // 1>. using an internal function "make_pair"

    p=make_pair(2, "prat");

    // accessig the elements using p.first and p.second
    // cout<<p.first<<" "<<p.second<<endl;

    // 2>.another way of putting the elemnets simply inside the cur;y braces{}
    p={2, "abc"};
    // cout<<p.first<<" "<<p.second<<endl;

// we can also copy a pair to another pair just like we can do in other dtatypes or even in vector
//  eg:
pair<int, string> p2;
p2=p;
// cout<<p2.second;

// but if i try to do something like this that p2.first=3; and then try to print p.first it will still be 2 only because the copy of p is there in p2
p2.first=3;
cout<<p.first<<endl;
// but if i use '&' then i can pass it by refference not by copy
// eg:
pair<int, string> &p3=p;
// now if i do
p3.first=3;
cout<<p.first<<endl;
// pairs are usually used to maintain yhe relationbetween two things
// suppose i have two arrays
int a[]={1, 2, 3};
int b[]={2, 3, 4};
// now for example if somenoe asks me to swap 1 and 3 in array a i have to do the same operation in b also
// so it would be better to declare an array of pairs
pair<int, int> p_array[3];
p_array[0]={1, 2};
p_array[1]={2, 3};
p_array[2]={3, 4};
// here all first elements are the elemets of array 'a' and vic versa for 'b'
// to print them use a simple for loop
// for(int i=0;i<3;i++){
//     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
// }
// now lets say even if i want to swap the first e;lement with the secon element i.e
swap(p_array[0], p_array[2]);
for(int i =  0;i<3;i++){
    // cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}

// taking input
// cin>>p.first>>p.second;


//  we can also declare the pair just like any other datatype inside a vector
    vector<pair<int, int> > v;
// BY THIS DECLARATION EVERY ELEMENT OF VECTOR 'V' IS GOING TO BE A PAIR
// i can also initialise it directly;
v={{10, 20}, {39, 49}, {51, 61}};
// understand if every element of this vector is a pair then v[i] is also a pair
// i.e. it could be imagined that v[i] is 'p' only, now how to get first element of 'p'
// by p.first similarly replace it by v[i],it becomes v[i].first

    // N E S T I N G   I N   V E C T O R S
    // cout<<endl<<v[2].first<<" "<<v[2].second<<endl;
    //similarly to take input as well
    // cin>>v[1].first;
}
