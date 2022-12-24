// Precomputation problem... see video no. 17,18,20 of Luv in cp playlist
#include <iostream>
using namespace std;
long long int t,M = 1000000007,n,x,Pow[1000001];
// long long int M = 1000000007;
// // long long int N = 1e5+1;
// long long int Pow[1000001];

int main() {
    
    std::cin >> t;
    Pow[0]=1;
    for(int i=1;i<=1000000;i++){
        Pow[i]=(Pow[i-1]*2)%M;
    }
    
    while(t--){
      
      std::cin >> n>>x;
      std::cout << (x*Pow[n-1])%M << std::endl;
      
    }
	// your code goes here
	return 0;
}
