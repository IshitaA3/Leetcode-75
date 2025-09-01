/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int pick;
    int guessNumber(int n) {
        int start = 1, end = n;
        int mid;
        int ans;
        while(start<=end){
            mid = start +(end-start)/2;
            int num = guess(mid);
            if(num == 0)
                return mid;
            if(num== -1)
                end = mid-1;
            
            else
                start = mid+1;
        } 
        return start;
    }
};