
#include<iostream>
using namespace std;
void BubbleSort( int A[],int n){
	int i,temp,k=0;
	  for (i= 0 ; i < n - 1;i++)
  {
    for (int j= 0 ; j < n -i - 1; j++)
    {
      if (A[j] > A[j+1])
      {
        temp   = A[j];
        A[j]   = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}
	int main(){
		cout<<"Bubble sort";
		int n=6;
		int A[6]={2,4,2,6,1,0};
		BubbleSort(A,n);
		cout<<"\n Sorted array elements are:A[";
		for(int i=0;i<=n-1;i++){
			cout<<A[i];
			if(i<n-1)
			cout<<",";
		}
		cout<<"]";
	}
