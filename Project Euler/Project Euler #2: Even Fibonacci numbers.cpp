#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int fib[100]; // stores all the fibonacci numbers upto to the 99th fibonacci number which will suffice for this question.
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; i < 100; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        long long int answer = 0;
        int i = 1;
        while(1){
            if(fib[i] > n) break;
            if(fib[i]%2 == 0){
                answer += fib[i];
            }
            i++;
        }
        cout << answer << endl;
    }
    return 0;
}
