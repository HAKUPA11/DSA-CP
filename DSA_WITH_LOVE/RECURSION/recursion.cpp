#include<bits/stdc++.h>
using namespace std;

// void fun0(int n){
//     cout<<"Happy birthday";
// }

// void fun1(int n){
//     cout<<n<<" days left for birthday \n";
//     fun0(n-1);
// }

// void fun2(int n){
//     cout<<n<<" days left for birthday \n";
//     fun1(n-1);
// }

// void fun3(int n){
//     cout<<n<<" days left for birthday"<<endl;
//     fun2(n-1);
// }

// int main(){
//     fun3(3);
// }
//pehle maine fun3 likha tha uske neeche fun2 phir uske neeche fun1 and then fun 0
//but ismei ek issue tha aur wo issue ye hai
// The function fun3 calls fun2, but fun2 is declared after fun3, so the compiler doesn’t know about it at that point.
// Similarly, fun2 calls fun1, and fun1 calls fun0, but they are defined after their calls.
//The functions are calling each other in a strictly decreasing order (fun3 → fun2 → fun1 → fun0), but they do not return back to their caller.
// recursion mei wo waapis apne caller ke paas jaate hai

//therefor maine fun 0 jo ki sabse last mei call hua hai use sabse pehle [sabse upar likha hai];

// it could be seen that recursion bhi aise hi kaam karta hai jaise ki yeh code , if u'll look 
// carefully toh keval functions ka naam change ho raha hai unka kaam nahi except the fun0 because i.e printing 
// happybirthday not n dayd remainng for birthday 


// example of real recursion:-
// void fun3(int n){
//     if(n==0){
//         cout<<"Happy Birthday";
//         return;
//     }//yeh base condition hai i.e stopping condition hai
//     //isei nahi lagayegayi toh recursion chalta jayega jab tak memory oerflow na ho jayega;
//     else{
//         cout<<n<<" days left for birthday"<<endl;
//     }
//     fun3(n-1);
// }

// int main(){
//     fun3(3);
// }

// IMP NOTE - ANYTHING WHICH CAN BE ITERATIVE CAN ALSO BE SOLVED USING RECURSION

// QUESTIONS-

// 1. PRINT 1 TO N;
// SOLN:


// void printx(int x){
//     if(x==0){
//         return;
//     }
//     else{
//         cout<<x<<endl;
//     }
//     printx(x-1);
// }

// void print_asc(int x, int n){
//     if(x==n){
//         cout<<n;
//         return;
//     }
//     else{
//         cout<<n<<endl;
//     }
//     print_asc(x, n+1);
// }

// void print_asc(int x){

//     //pehle aise function ko revursively call koiya aur baad mei pprint karengay
//     //isiliye wo peeche se print karna chalu karega
//     if(x==1){
//         cout<<1<<endl;
//         return;
//     }
//     print_asc(x-1);
//     cout<<x<<endl;

// }

// int main() {
//     int x, n=1;
//     cin>>x;
//     // printx(x);
//     // print_asc(x, n);
//     print_asc(x);//passing only one arguement, it is just like printx fxn
//     return 0;
// }

// EXPLANATION FOR FXN print_asc(x)
// Suppose the user inputs x = 4. The function calls occur in this order:

// Call Stack Expansion (Recursive Calls)
// Call Stack (Top to Bottom)
// print_asc(4)
// print_asc(3)
// print_asc(2)
// print_asc(1) → Base Case: Prints 1



// Call Stack Unwinding (Returning Phase)
// Now, the calls start returning and executing the cout << x << endl; statement:

// Return Stack (Top to Bottom)	          Output
// print_asc(1) returns → cout << 2	        1
// print_asc(2) returns → cout << 3	        2
// print_asc(3) returns → cout << 4	        3
// print_asc(4) returns (final return)	    4


// Diagram Representation
// Below is a visual representation of the call stack expansion and unwinding:

//   print_asc(4)
//                │
//                ▼
//             print_asc(3)
//                │
//                ▼
//             print_asc(2)
//                │
//                ▼
//             print_asc(1)  →  Prints 1 and returns
//                ▲
//                │
//      Returns and prints 2
//                ▲
//                │
//      Returns and prints 3
//                ▲
//                │
//      Returns and prints 4 (Final)


