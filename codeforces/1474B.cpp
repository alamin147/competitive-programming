#include <bits/stdc++.h>

using namespace std;

const int maxn = 40000;
vector<int> primes;
vector<bool> isprime(maxn, true);

void siv() {
    isprime[0] = isprime[1] = false;
    for (int p = 2; p*p < maxn; p++) {
        if (isprime[p]) {
            for (int i = p*p; i<maxn; i+=p)
                isprime[i] = false;
        }
    }
    for(int p = 2; p<maxn; p++){
        if(isprime[p]){
            primes.push_back(p);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    siv();

    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;

        long long p1 = *lower_bound(primes.begin(), primes.end(), 1+d);
        long long p2 = *lower_bound(primes.begin(), primes.end(), p1+d);

        cout << p1 * p2 << endl;
    }

    return 0;
}
