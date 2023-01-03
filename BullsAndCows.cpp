class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0,cows=0;
        int n = secret.size();
        int secFre[10]={0},gueFre[10]={0};
        for(int i=0;i<n;i++){
            if(secret[i] == guess[i]) bulls++;
            else{
              secFre[secret[i]-'0']++;
              gueFre[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            cows+= min(secFre[i],gueFre[i]);
        }
        
        string ans = "";
        ans+=to_string(bulls) + "A" + to_string(cows) + "B";
        return ans;
    }
};