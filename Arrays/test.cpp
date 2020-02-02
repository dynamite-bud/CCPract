#include<bits/stdc++.h>

using namespace std;

int rFind(int arr[],int key,int size){
    static int i=0;
    if(i==size){
        return -1;
    }
    if(arr[i++]==key){return i-1;}
    rFind(arr,key,size);
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,10,55,12,65,84,232,65,84,22};
    cout<<rFind(arr,22,sizeof(arr)/sizeof(int));
    return 0;
}