#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot =arr[e];
    int pIndex= s;

    for(int i=s;i<e;i++){
        if(arr[i]<pivot){
            int temp= arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]=temp;
            pIndex++;
        }
    }

    int temp=arr[e];
    arr[e]=arr[pIndex];
    arr[pIndex]=temp;

    return pIndex;

}
void QuickSort(int arr[],int s, int e){
    if(s<e){
        int p= partition(arr,s,e);
        QuickSort(arr,s,(p-1));//recursive quick sort call for left partition
        QuickSort(arr,(p+1),e);//recursive quick sort call for right partition
    }
}

int main(){
    int size=0;
    cout<<"Enter The Size of array :";
    cin>>size;
    int myarray[size];

    cout<<"Enter "<<size<<" integers of the array."<<endl;
    for(int i=0;i<size;i++){
        cin>>myarray[i];
    }
    cout<<"Before sorted"<<endl;
    for(int i=0;i<size;i++){
       
        cout<<myarray[i]<<" "<<endl;
    }
    cout<<endl;
    QuickSort(myarray,0,(size-1)); //QuickSort called here
    cout<<"After sorted"<<endl;

    for(int i=0;i<size;i++){
        cout<<myarray[i]<<" "<<endl;
    }

    return 0;
}