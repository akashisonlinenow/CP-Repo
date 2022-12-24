#include <iostream>
// #include<math.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int u,v,a,s;
        std::cin >> u>>v>>a>>s;
        
        // int v= sqrt(u pow(2) - 2*a*s);
        if(v*v >= u*u-2*a*s){
            std::cout << "Yes" << std::endl;
        }
        else
            std::cout << "No" << std::endl;
    }
	// your code goes here
	return 0;
}
