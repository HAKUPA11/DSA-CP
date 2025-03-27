#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<bool> is_prime(num, 1);
    is_prime[0]=is_prime[1]=false;

    for(int i=2;i<num;i++){
        if(is_prime[i]==true){
            for(int j=2*i;j<num;j+=i){
                is_prime[j]=false;
            }
        }
    }

    for(int i=0;i<num;i++){
        if(is_prime[i]==true){
            cout<<i<<" ";
        }
    }

}