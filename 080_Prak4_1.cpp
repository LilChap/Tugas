#include <stdio.h>
#include <iostream>
#define n 10 
using namespace std;
main()
{
	int A[n];
	int i, min, max, rata, sum;
	sum = 0;
	printf("Input %i bilangan:\n\n", n);
	for(i=0; i<n; i++) {
		cout << "Bil " << (i+1) << " = ";
		cin >> A[i];
		sum += A[i];
		}
		
	max = A[0];
	min = A[0];
	rata = sum / n;
	
	for(i=1; i<n; i++) {
		if (A[i] > max) {max = A[i];
		}
		else if(A[i] < min) {
			min = A[i];
		}
	}
	
	cout << sum << endl;
	cout << "Nilai terbesar = " << max << endl;
	cout << "Nilai terkecil = " << min << endl;
	cout << "NIlai rata - rata = " << rata << endl;
	return 0;
}