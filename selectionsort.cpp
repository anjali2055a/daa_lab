#include<iostream>
using namespace std;

	void SelectionSort(int A[],int n){
		int iMin;
		int temp;
		for(int i=0;i<=n-2;i++)
		{
			iMin=i;
			for(int j=i+1;j<=n-1;j++){
				if(A[iMin]>A[j]){
					iMin=j;
					
				}
				temp=A[i];
				A[i]=A[iMin];
				A[iMin]=temp;
			}
		}
	}
	
int main() {
	int n=6;
	int A[6]={0,7,8,1,3,2};
	SelectionSort(A,n);
	cout<<"Sorted array elements are: A[";
	for(int i=0;i<=n-1;i++){
		cout<<A[i];
		if(i!=n-1)
			cout<<",";
		}
		cout<<"]";
		 return 0;	
		
	}
 


