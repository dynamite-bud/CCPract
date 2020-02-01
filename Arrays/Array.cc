#include<bits/stdc++.h>
#define SIZE(arr) sizeof(arr)/sizeof(int)
using namespace std;




class xArray{
private:
    int len;
    int *data;
    int* changeSize(int*);
public:
    xArray(){
        int temp[]={-1};
        xArray(temp,1);
        cout<<"Inside Default Constructor";
    }
    xArray(int val){
        int temp[]={val};
        xArray(temp,1);
        cout<<"Inside Default Constructor";
    }
    xArray(int arr[],int size);
    int length();
    int get(const int);
    int push(const int);
    int ins(const int,int);
    int pop();
    int del(const int);
    int sum();
    // int rMax();
    // int xMin();
    //int rMin();
    // int rSearch(int);
    // int linSearch(int);
    // int binSearch(int);
    //int rBinSearch(int);
    // void xSort();
    //void rSort();
    void print();
};
xArray::xArray(int _data[],int _size){
    this->len=_size;
    this->data=new int[_size];
    this->data=_data;
}
void xArray::print(){
    for(int i=0;i<this->len;i++){
        cout<<*(data+i)<<" ";
        }
}
int xArray::length(){
    return this->len;
}
int xArray::get(int index){
    return *(data+index);
}

int main(){
    int temp[]={1,2,3,4,5};
    xArray A(temp,SIZE(temp));
    A.print();
    cout<<A.get(2);
    return 0;
}
