#include "bits/stdc++.h"

using namespace std;

#define ull unsigned long long
#define ll long long
#define l long
#define in(a) cin >> a
#define out(a) cout << a
#define endl "\n"
#define fast fio; fin; fout;
#define fio ios::sync_with_stdio(false)
#define fin cin.tie(NULL)
#define fout cout.tie(NULL)

#include "insertion_sort.h"


int main() {
	//fast
	
	int n;
	out("Enter n\n");
	in(n);
	out("Enter n numbers\n");
	vector <l> arr(n);
	for (int i = 0; i < n; ++i) {
		in(arr[i]);
	}

	insertion_sort(arr);
	out("Sorted array:\n");
	for (int i = 0; i < n; ++i) {
		out(arr[i]); out(" ");
	}

	return 0;
}