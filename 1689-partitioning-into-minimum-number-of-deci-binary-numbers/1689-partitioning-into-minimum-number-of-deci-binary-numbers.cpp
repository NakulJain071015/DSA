class Solution {
public:
    int minPartitions(string n) {
       char lar = n[0];

    for(int i = 1; i < n.length(); i++) {
        if(n[i] > lar) {
            lar = n[i];
        }
    }

    return lar - '0'; 
    }
};