
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        if(size==1){
            if(flowerbed[0]) {
                return (n>0)? false:true;
            }
            else {
                return (n<2)? true:false;
            }
        }
        for(int i=0;i<size;i++){
            while(i<size and flowerbed[i]==1) i++;
            if(!n) return true; 
            if(i==0){
                if(flowerbed[i+1] == 0) {cout<<"CASE1 ";flowerbed[i] = 1; n--;}
            }
            else if(i==size-1){
                if(flowerbed[i-1]==0){cout<<"CASE2 ";flowerbed[i] = 1; n--;}
            }
            else {
                cout<<i<<" CASE3 ";
                if(flowerbed[i-1] == 0 and flowerbed[i+1] == 0) {
                    flowerbed[i] = 1; n--;
                }
            }
            cout<<"N "<<n<<endl;
        }
        return (!n)? true : false;
    }
};