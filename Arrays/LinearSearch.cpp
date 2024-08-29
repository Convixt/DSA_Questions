class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {
        
        int ans = -1;
        

        // Your code here
        for(int i = 0 ; i < N ; i++){
            if(arr[i] == K){
                ans = 1 ;
            }
            }
            return ans;
        
        
    }
    
};