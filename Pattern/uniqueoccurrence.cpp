// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int unique(int arr[],int arri[],int size){
    int j=0;
    for(int i=0;i<size;i++){
        int count=1;
        while(i+1<size && arr[i]==arr[i+1]){
            count++;
            i++;
        }
        arri[j]=count;
        j++;
    }
    cout<<"the value of j "<<j<<endl;
    return j;
}
int distinct(int arri[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++)
        if(arri[i]==arri[j]){
            return false;
        }
    }return true;
}
int main() {
    int arr[]={2,2,3,2,1,1,1,1,4,4};
    int arri[9];
    int size1;
    int size = sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    print(arr,size);
    size1=unique(arr,arri,size);
    print(arri,size1);
    if(distinct(arri,size1)){
        cout<<"distinct ";
    }
    else{
        cout<<" flase ";
    }
    return 0;
}