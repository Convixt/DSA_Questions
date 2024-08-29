// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int largest = INT_MIN;

        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }

        int slargest = INT_MIN; 

       
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > slargest && arr[i] != largest){
                slargest = arr[i];
            }
        }

        
        if(slargest == INT_MIN) {
            return -1;
        }

        return slargest;
    }
    
};