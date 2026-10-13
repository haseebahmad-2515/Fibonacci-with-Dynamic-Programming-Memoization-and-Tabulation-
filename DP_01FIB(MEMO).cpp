#include<iostream>
using namespace std;

int fibanaci(int n){  // TC:2^N
    if(n<=1){
        return n;
    }
    int temp=fibanaci(n-1)+fibanaci(n-2);
    return temp ;
}

int fibanaci_DP(int n,int*array){  // TC:0(N)
    if(n<=1){
        return n;
    }
    if(array[n]!=-1){
        return array[n];

    }
    int temp=fibanaci_DP(n-1,array)+fibanaci_DP(n-2,array);
    array[n]=temp;
    return temp ;
}

int main(){
    int array[7]={-1,-1,-1,-1,-1,-1,-1};

   cout<< fibanaci_DP(6,array);
}