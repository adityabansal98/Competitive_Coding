#include <bits/stdc++.h>
using namespace std;

// returns sum of all multiples of x upto n
long long int mult_sum(long long int n, long long int a){
    /*
        The multiples of x form an Arithmetic Progression (A.P.) viz. x, 2x, 3x, ........., (floor(n/x))*x
        The first term of this A.P. is x and the total number of terms are floor(n/x) i.e. n/x in integer division.
        The common difference here is x.
        The sum of first n terms of an A.P. with first term = a and common difference = d. is given by - n/2*{2*a + (n - 1)*d}
    */
    long long int total_number_of_terms = n/a; 
    return (total_number_of_terms*(2*a + (total_number_of_terms - 1)*a))/2;
}

int main(){
    int t;
    cin >> t;

    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        // we add the multiples of 3 and 5 upto n and subtract the multiples of 15 upto n since they will be included twice.
        long long int answer = mult_sum(n - 1,3) + mult_sum(n - 1,5) - mult_sum(n - 1,15); 
        cout << answer << endl;
    }
    return 0;
}
