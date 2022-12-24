#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int w1,w2,x1,x2,m;
        std::cin >> w1>>w2>>x1>>x2>>m;
        
        if((w2-w1)>=x1*m && (w2-w1)<=x2*m)
            std::cout << 1 << std::endl;
        else 
            std::cout << 0 << std::endl;
        
    }
	// your code goes here
	return 0;
}
