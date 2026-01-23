class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int five=0;
        int ten=0;
        int twenty=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==5){
                five++;
            }else if(arr[i]==10){
                if(!five)
                return false;
                five--;
                ten++;
            }else{
                if(!ten){
                    if(five<3)
                    return false;
                    five-=3;
                    twenty++;
                }else{
                    if(!five)
                    return false;
                    five--;
                    ten--;
                    twenty++;
                }
            }
        }
        return true;
    }
};