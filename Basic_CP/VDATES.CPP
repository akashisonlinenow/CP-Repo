#include <iostream>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int D, L, R;
        cin >> D >> L >> R;

        if ((D < L) && (D < R))
            std::cout << "Too Early" << std::endl;
        else if ((D > L) && (D > R))
            std::cout << "Too Late" << std::endl;
        else
            std::cout << "Take second dose now" << std::endl;
    }

    // your code goes here
    return 0;
}