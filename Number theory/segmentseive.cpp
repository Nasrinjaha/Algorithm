#include <bits/stdc++.h>
#define MAX 32000
using namespace std;
using ll = long long;
vector<int> primes;
void sieve() {
    bool isPrime[MAX];
    for (int i = 0; i < MAX; ++i) isPrime[i] = true;
    for (int i = 3; i * i <= MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < MAX; i += 2) {
        if (isPrime[i]) primes.push_back(i);
    }
}

ll segSieve (ll l, ll r) {
    bool isPrime[r-l+1];
    for (int i = 0; i < r - l + 1; ++i) isPrime[i] = true;
    if (l == 1) isPrime[0] = false;
    for (int i = 0; primes[i]*primes[i] <= r; ++i) {
        int currentPrime = primes[i];
        ll base = (l/currentPrime)*currentPrime;
        if (base < l) base += currentPrime;
        for (ll j = base; j <= r; j += currentPrime) {
            isPrime[j-l] = false;
        }
        if (base == currentPrime) isPrime[base-l] = true;
    }
    ll cnt = 0;
    for (int i = 0; i < r - l + 1; ++i) {
        if (isPrime[i]) cnt++;
    }
    return cnt;
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll ans = segSieve(l, r);
        bool fg = false;
        for(int i=0;i<primes.size();i++){
            if(ans==primes[i]){
                fg = true;
                break;
            }
        }
        if(fg){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }


    return 0;
}