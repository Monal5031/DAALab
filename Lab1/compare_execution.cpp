#include "bits/stdc++.h"
#include <stdio.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define l long
#define in(a) cin >> a
#define out(a) cout << a
#define s(f,a) fscanf(f,"%d",&a)
#define sl(f,a) fscanf(f,"%ld",&a)
#define endl "\n"
#define fast fio; fin; fout;
#define fio ios::sync_with_stdio(false)
#define fin cin.tie(NULL)
#define fout cout.tie(NULL)

#include "quick_sort.h"
#include "insertion_sort.h"


int main() {
	//fast

	FILE *fp;
	fp = fopen("testcase.txt","r");
	int n;
	s(fp,n);
	vector <l> arr(n);
	vector <l> copy_arr(n);
	for (int i = 0; i < n; ++i) {
		sl(fp,arr[i]);
		copy_arr[i] = arr[i];
	}


	// Insertion Sort
	int start_s = clock();
	insertion_sort(arr);
	int stop_s = clock();
	out("\nTime of execution by insertion_sort in millisec: ");
	out(((double)stop_s-(double)start_s)/double(CLOCKS_PER_SEC)*1000);
	out("\n");

	// Quick Sort
	start_s = clock();
	quick_sort(n, copy_arr);
	stop_s = clock();
	out("\nTime of execution by quick_sort in millisec: ");
	out(((double)stop_s-(double)start_s)/double(CLOCKS_PER_SEC)*1000);
	out("\n");
	return 0;
}