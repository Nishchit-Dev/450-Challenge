// Link to Question
// https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int low = 0 ;
        int high = n;
        
        
        while(high >= low){
            int mid = low + (high-low)/2;
            if(arr[mid]==k){
                return mid;
            }
            
            if(arr[mid] < k){
                low = mid + 1; 
            }
            if(arr[mid] > k){
                high = mid - 1;
            }
        }
        return -1;
    }
};