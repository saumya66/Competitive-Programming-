
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void reverseQueue(queue<char>& Queue)
{
	stack<int> Stack;
	while (!Queue.empty()) {
		Stack.push(Queue.front());
		Queue.pop();
	}
	while (!Stack.empty()) {
		Queue.push(Stack.top());
		Stack.pop();
	}
}

void solve()
{
	ll n;
	cin >> n;

	queue<char >br , gr;
	for (int i = 0; i < n; i++)
	{
		char t;
		cin >> t;
		br.push (t);
	}
	for (int i = 0; i < n; i++)
	{
		char t;
		cin >> t;
		gr.push (t);
	}
	if ((br.front () != gr.front()) && (br.front () == gr.back()))
	{
		reverseQueue(gr);

	}

	int c = n, x, z  ;
	char a, b;
	while (x < 4)

	{
		a = br.front();
		z = 0;
		while (z < n)
		{
			if (a == gr.front() )
			{
				gr.pop ();
				br.pop ();
				--c;
				break;

			}
			else {



				char t = gr.front();
				gr.pop ();
				gr.push (t);

			}
			++z;
		}
		++x;


	}
	cout << c;





}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);


	solve();
	cout << "\n";


	return 0;
}
