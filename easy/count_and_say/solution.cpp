class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        if (n==1)
            return ans;
        for (int i=0; i<n-1 ;i++) {
            ans = _re(ans);
        }
        return ans;
    }
    
    string _re(string a) {
        string back;
        int cnt=1, j=0;
        char last = a[j];
        for (j=1; j<a.length(); j++) {
            if (a[j]==last)
                cnt++;
            else {
                back.push_back(cnt+'0');
                back.push_back(last);
                cnt = 1;
                last = a[j];
            }
        }
        back.push_back(cnt+'0');
        back.push_back(last);
        return back;
    }
};