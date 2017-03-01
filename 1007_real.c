#include <stdio.h>
#include <math.h>
#include <vector>
bool isPrime(int n);

int main() {
    std::vector<int> primes;
    int bound_no;
    int count_prime_pair = 0;
    
    scanf("%d", &bound_no);
    for(int i=2; i<=bound_no; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    for(int i=0; i<primes.size()-1; i++){
        if(primes[i+1]-primes[i]==2) count_prime_pair+=1;
    }
    
    printf("%d", count_prime_pair);
    return 0;
}

bool isPrime(int m){
    if(m==2) return true;
    for(int i=2; i<=sqrt(m); i++) {
        if(m%i==0) return false;
    }
    return true;
}
