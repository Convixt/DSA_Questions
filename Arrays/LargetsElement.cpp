#include <vector>
#include<iostream>

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    
    {
       
    int ans = arr[0];
    for(int i = 1 ; i < n; i++) {
    if(ans<arr[i]){
     ans = arr[i];
    }
   
           
            }
             return ans ;
        }
        
    
};


