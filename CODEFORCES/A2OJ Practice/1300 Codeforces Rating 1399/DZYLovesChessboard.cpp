#include<bits/stdc++.h>

using namespace std;
 
int n, m;
char S[1100];
 
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", S);
		for (int j = 0; j < m; j++)
			if (S[j] == '.') {
				if ((i + j) & 1)	S[j] = 'W';//checks odd
				else	S[j] = 'B';
				bool a=(i+j)&1;
			 cout<<a<<endl;
			}

		printf("%s\n", S);
	}
}