#include<iostream>
using namespace std;

void RotatebyOne(int arr[], int n){
	int temp=arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}

void Left_Rotate(int arr[],int d,int n){
	for(int i=0;i<d;i++){
		RotatebyOne(arr,n);
	}
}

void Print_Array(int arr[], int n){
	cout<<"Printing array: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

//code driver

int main(){
	int arr[]={9,8,7,0,1,2,3,4,5,6};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	Left_Rotate(arr,3,size);
	Print_Array(arr,size);
}
