#include <bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;
     
int main(){
	const int N = 100100;
  bool t[N] = { true, true };
  int a[500], b[500], n, m, i, j, x;
  for (i = 2; i * i < N; ++i)
  	for (j = i * i; j < N; j += i)
  		t[j] = true;
  cin >> n >> m;
  for (i = 0; i < n; ++i)
  	for (j = 0; j < m; ++j){
    	int  k = 0;
    	for ( cin >> x; t[x + k]; ++k);
    	a[i] += k;
    	b[j] += k;
    }
  cout << min(*min_element(a, a + n), *min_element(b, b + m)) << endl;
	return 0;
}