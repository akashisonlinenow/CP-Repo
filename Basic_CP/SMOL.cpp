#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int n,k;
        std::cin >> n>>k;
        if(k==0){
            std::cout << n << std::endl;
            continue;
        }
        n=n%k;
        std::cout << n << std::endl;
    }
	// your code goes here
	return 0;
}
