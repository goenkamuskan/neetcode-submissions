class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int begin=0;
        int end=n-1;
        while(begin<end){
            swap(s[begin],s[end]);
            begin++;
            end--;
        }
    }
};