#include <iostream>
using namespace std;

void bubblesort(int a[], int n){
	
	for(int i=0; i<n-1; i++){
		bool isSwap=false;
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				isSwap=true;
			}
		}
		if(!isSwap){
			cout<<"The array is already sorted"<<endl;
			return;
		}
		
	}
	
}

void printarray(int arr[], int n){
	cout<<"The sorted array is"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int size=5;
	int arr[]={23,12,65,33,1};
	
	bubblesort(arr,size);
	printarray(arr, size);
	
}

