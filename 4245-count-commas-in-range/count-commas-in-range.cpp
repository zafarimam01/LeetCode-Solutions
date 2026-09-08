class Solution {
public:
    int countCommas(int n) {
        int lastInd = 0;
        int cnt = 0;
        int temp = n;
        while(temp !=0){
            lastInd = temp%10;
            cnt++;
            temp/=10;
        }
        int comma = 0;
        if(cnt >= 4){
            for(int i=1000; i<=n; i++){
                comma+=1;
            }
        }
        else return 0;
        return comma;

    }
};