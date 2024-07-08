#include<iostream>
  using namespace std;
  void linearSearch(int *array,int size,int target){
    int index=-1;
    for(int i=0;i<size;i++){
        if(array[i]==target){
            index=i;
            break;
        }
    }
    if(index != -1){
        cout<<"Element matches in index: "<<index<<endl;
    }
    else{
        cout<<"Not fount the element "<<target<<" in an array"<<endl;
    }
  }
  int main(){
    int size,element;
    cout<<"Enter the size of an array: ";
    cin>>size;
    //we are using the concept of dynamic array here in which at runtime its size shrinks in memory
    int *arr= new int[size];
    cout<<"Enter "<<size<<" elements in an array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search in an array: ";
    cin>>element;
    linearSearch(arr,size,element);
    return 0;
  }