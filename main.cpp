#include "src/include/twoSum.h"
#include <vector>
int main() {
    std::vector<int> v=std::vector<int>{3,5,1,7,9,6,2};
    int target=15;
    twoSum::Solution s=twoSum::Solution{};
    std::vector<int> result=s.twoSum(v,target);//TODO improve memory usage
    return 0;
}