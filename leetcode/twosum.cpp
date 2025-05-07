#include <vector>
#include <map>
#include <iostream>


std::vector<int> TwoSumBrute(std::vector<int>& nums, int target) {
    std::vector<int> sum;

    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if (nums.at(i) + nums.at(j) == target){
                sum.push_back(i);
                sum.push_back(j);
            }
        }
    }
    return sum;
}

std::vector<int> TwoSumMain(std::vector<int>& nums, int target){
    std::vector<int> sum;
    std::map<int, int> mapping;

    for(int i = 0; i < nums.size(); i++){
        int result = target - nums.at(i);

        if(mapping.find(result) != mapping.end()){
            sum.push_back(i);
            sum.push_back(mapping.find(result)->second);
            break;
        }else {
            mapping[nums.at(i)] = i;
        }
    } 
    return sum;
}

int main() {
    std::vector<int> test = {5,8,3,11,4};
    std::vector<int> result = TwoSumBrute(test, 11);
    
    // Print the result vector
    std::cout << "Indices: ";
    for(int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if(i < result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

}