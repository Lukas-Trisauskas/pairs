#include <ostream>
#include <set>
#include <vector>
#include <algorithm>
#using namespace std;

int pairs(int k, vector<int> arr) {
    int i = 0;
    int j = 0;
    int n = 0;
    
    sort(arr.begin(), arr.end());
    set<int> myset(arr.begin(), arr.end());
    
    while(i < arr.size()) {
        if(arr[i] > k) {
            int df = arr[i] - k;
            if(myset.find(df) != myset.end()) {
              n++;  
            }
        }
        i++;
    }
    return n;
}
int main() {
  //size n = 5, k =2
  //arr = [1, 5, 3, 4, 2]
  
  vector<int> arr {1, 5, 3, 4, 2};
  pairs(k, arr);
}
