
#include<bits/stdc++.h>
using namespace std;

std::vector<int> primeFactors; //The arrar/vector in which we will store our prime factors

void findPrimeFactors(int n)   // The fuction that finds out and stores all the prime factors
{
	while (n % 2 == 0)            //Step 1 - Checking Factorization by 2
	{
		primeFactors.push_back(2); //Storing the factor
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2) //Step 2 - Traversing through all the odd numbers starting fromm 3 to square root on 'n' while incrementing by 2
	{
		while (n % i == 0)                    // Checking Factorization
		{
			primeFactors.push_back(i);        //Storing the factor
			n = n / i;
		}
	}
	if (n > 1) {                  //Step 3 check if 'n' was a prime number
		primeFactors.push_back(n);
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;                   //Taking a number as input
	findPrimeFactors(n);        //Calling the function that fills up the resultant array with all the prime factors
	for (int i = 0; i < primeFactors.size(); i++) //Priting the prime factors
	{
		cout << primeFactors[i] << " ";
	}


	return 0;
}
