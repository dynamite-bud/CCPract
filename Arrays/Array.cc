#include<bits/stdc++.h>

#define SIZE(arr) sizeof(arr)/sizeof(int)

using namespace std;

class xArray{
private:
    int len;
    int* data;
    int* changeSize(int*,int,int);
public:
    xArray(){xArray(-1);}
    xArray(int);
    xArray(int*,int);
    int length();
    int get(const int);
    int push(const int);
    int ins(const int,const int);
    int pop();
    int del(const int);
    int remove(const int);
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
xArray::xArray(int value){
    this->len=1;
    this->data=new int[1];
    data[0]=value;
}
xArray::xArray(int _data[],int _size){
    this->len=_size;
    this->data=new int[_size];
    this->data=_data;
}
int xArray::length(){
    return this->len;
}
int* xArray::changeSize(int* arr, int oSize, int nSize){
    int* newArr = new int[nSize];
    copy(arr,arr+min(oSize,nSize),newArr);
    return newArr;
}
int xArray::get(const int index){
    return *(data+index);
}
int xArray::push(const int num){
    data=changeSize(this->data,len++,len);
    data[len-1]=num;
    return len;
}
int xArray::pop(){
    int poppedNum=data[len-1];
    data=changeSize(this->data,len--,len);
    return poppedNum;
}
int xArray::ins(const int num,const int index){
    data=changeSize(this->data,len++,len);
    for(int i=len-1;i>index;i--){data[i]=data[i-1];}
    data[index]=num;
    return len;
}
int xArray::del(const int index){
    int delNum=data[index];
    for(int i=index;i<len-1;i++){
        data[i]=data[i+1];
    }
    data=changeSize(data,len--,len);
    return delNum;
}
int xArray::sum(){
    int sum=0,i=0;
    while(i<len){sum+=data[i++];}
    return sum;
}
void xArray::print(){
    for(int i=0;i<len;i++){
        cout<<data[i]<<" ";
        }
    cout<<endl;
}
int main(){
    int temp[]={1,2,3,4,5,10,12,151,4,8,6,2,14};
    xArray A(temp,SIZE(temp));
    A.print();
    cout<<A.length()<<endl;
    cout<<A.push(999)<<endl;
    // cout<<A.pop()<<endl;
    cout<<A.length()<<endl;
    // cout<<A.ins(51,3)<<endl;
    cout<<A.del(7)<<endl;
    // A.push(100);
    A.print();
    cout<<A.sum();
    return 0;
}
