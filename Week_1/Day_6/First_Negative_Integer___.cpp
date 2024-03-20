vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        int l = 0, r = 0;
        queue<pair<long long, long long>> qu;
        vector<long long> v;
        
        while (r < N) {
            if (A[r] < 0) {
                qu.push({r,A[r]});
            }
            if (r-l+1 == K) {
                if (qu.empty()) {
                    v.push_back(0);
                    r++;
                    l++;
                } else {
                    pair<long long, long long> ss = qu.front();
                    if (ss.first > r) {
                        v.push_back(0);
                    } else {
                        v.push_back(ss.second);
                    }
                    r++;
                    l++;
                    
                    if (ss.first < l) {
                        qu.pop();
                    }
                }
            } else {
                r++;
            }
        }
        return v;
 }