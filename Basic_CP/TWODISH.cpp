#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int dish,fruits,veg,fish;
        std::cin >> dish>>fruits>>veg>>fish;
        
        if((fruits+fish)>=dish && veg>=dish)
            std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
	// your code goes here
	return 0;
}
