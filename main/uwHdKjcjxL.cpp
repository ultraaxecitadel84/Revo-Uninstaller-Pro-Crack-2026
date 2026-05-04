#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility{
public:
    static int findMax(const std::vector<int>& nums){
        return *std::max_element(nums.begin(), nums.end());
    }
    static int findMin(const std::vector<int>& nums){
        return *std::min_element(nums.begin(), nums.end());
    }
    static double calculateAverage(const std::vector<int>& nums){
        return static_cast<double>(std::accumulate(nums.begin(), nums.end(), 0)) / nums.size();
    }
    static void sortAscending(std::vector<int>& nums){
        std::sort(nums.begin(), nums.end());
    }
    static void sortDescending(std::vector<int>& nums){
        std::sort(nums.begin(), nums.end(), std::greater<int>());
    }
    static void printVector(const std::vector<int>& nums){
        for(const auto& num : nums){
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }
};
int main(){
    std::vector<int> numbers = {5, 3, 8, 1, 4};
    std::cout << "Max: " << Utility::findMax(numbers) << std::endl;
    std::cout << "Min: " << Utility::findMin(numbers) << std::endl;
    std::cout << "Average: " << Utility::calculateAverage(numbers) << std::endl;
    Utility::sortAscending(numbers);
    std::cout << "Sorted Ascending: ";
    Utility::printVector(numbers);
    Utility::sortDescending(numbers);
    std::cout << "Sorted Descending: ";
    Utility::printVector(numbers);
    return 0;
}
