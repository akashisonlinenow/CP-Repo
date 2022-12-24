#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int a,b,a1,b1,a2,b2;
        std::cin >> a>>b>>a1>>b1>>a2>>b2;
        
       int maxab = max(a,b);
       int minab = min(a,b);
       
       int maxa1b1 = max(a1,b1);
       int mina1b1 = min(a1,b1);
       
       int maxa2b2 = max(a2,b2);
       int mina2b2 = min(a2,b2);
       
       if(maxab==maxa1b1 && minab==mina1b1)
        std::cout << 1 << std::endl;
        else if(maxab==maxa2b2 && minab==mina2b2)
            std::cout << 2 << std::endl;
            else
                std::cout << 0 << std::endl;
       
    }
	// your code goes here
	return 0;
}
