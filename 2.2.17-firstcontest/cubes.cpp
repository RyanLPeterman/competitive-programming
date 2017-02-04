#include <iostream>
#include <vector>
#include <sstream>

int main () {

    std::string tmp;
    std::vector<int> nums;
    
    std::getline(std::cin, tmp);
    std::stringstream ss(tmp);
    
    int n;
    ss >> n;
    
    std::getline(std::cin, tmp);
    std::stringstream s2(tmp);
    int ti;
    while (s2 >> ti) {
        nums.push_back(ti);
    }

    bool swap = true;

    for (int i = 0; i < n; i++) {
        if (i == n/2) {
            std::cout << nums[i] << " ";
            // swap once if even to set swap var back for symmetry
            if ((n % 2 == 0) && (i == n/2)) {
                swap = !swap;
            }
        } else if (swap) {
            std::cout << nums[n - i - 1] << " ";
        } else {
            std::cout << nums[i] << " ";
        }
        swap = !swap;
    }
    std::cout << std::endl;
}
