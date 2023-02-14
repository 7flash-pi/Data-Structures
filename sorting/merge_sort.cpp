// In computer science, merge sort (also commonly spelled as mergesort) is an efficient, general-purpose, 
// and comparison-based sorting algorithm. Most implementations produce a stable sort, 
// which means that the order of equal elements is the same in the input and output. 
// Merge sort is a divide-and-conquer algorithm that was invented by John von Neumann in 1945. 
// A detailed description and analysis of bottom-up merge sort appeared in a report by Goldstine and von Neumann as early as 1948.
// Conceptually, a merge sort works as follows:

// Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted).
// Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list
// Source(https://en.wikipedia.org/wiki/Merge_sort)
#include<bits/stdc++.h>
using namespace std;
void Merge(int *A, int *L, int leftCount, int *R, int rightCount){
	int i, j, k;
	i = 0; j = 0; k = 0;
	while(i < leftCount && j < rightCount){
		if(L[i] < R[j])
			A[k++] = L[i++];
		else
			A[k++] = R[j++];		
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];	
}

void MergeSort(int *A, int n){
	int mid, *L, *R;
	if(n < 2) return; // base condition if array has less then 2 elements do nothing
	mid = n / 2;
	L = (int*)malloc(mid * sizeof(int));
	R = (int*)malloc((n - mid) * sizeof(int));
	for(int i = 0; i < mid; i++) L[i] = A[i];
	for(int i = mid; i < n; i++) R[i - mid] = A[i];
	MergeSort(L, mid);
	MergeSort(R, n - mid);
	Merge(A, L, mid, R, n - mid);
	free(L);
	free(R);
}
int main(){
	int A[] = {2,1,4,3,5,99,32,47,106,1,4,6,8,7,0,9};
	MergeSort(A,16);
	for(int i = 0; i < 16; i++)
		cout << A[i] << " ";
	return 0;	
}
