#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    string arr[]={"NORMAL","HUGE","SMALL" };
    
    while(t--){
        int x;
        std::cin >> x;
        
        std::cout << arr[x%3] << std::endl;
        
        
        
        
    }
	// your code goes here
	return 0;
}
