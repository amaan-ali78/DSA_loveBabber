#include<iostream>
using namespace std;
int* revar(int arr[],int n){
    int j=n-1;
    int i=0;
    while(i<j){
        int temp;
       temp= arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
    }
    return arr;
}

int main(){
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
    int* ar=revar(arr,size);
for(int i=0;i<size;i++){
    cout<<ar[i]<<" ";
}



    return 0;

}