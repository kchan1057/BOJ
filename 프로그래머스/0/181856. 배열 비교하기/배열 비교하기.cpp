#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int len1 = arr1.size();
    int len2 = arr2.size();
    if(len1 != len2){
        if (len1 > len2) return 1;
        else return -1;
    }
    else{
        int a = accumulate(arr1.begin(), arr1.end(), 0);
        int b = accumulate(arr2.begin(), arr2.end(), 0);
        if(a > b) return 1;
        else if(a < b) return -1;
        else return 0;
    }
}