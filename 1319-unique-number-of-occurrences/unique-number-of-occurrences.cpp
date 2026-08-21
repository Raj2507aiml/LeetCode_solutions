class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
                sort(arr.begin(), arr.end());
                vector<int> occurrence;
                int count = 1;
                for(int i = 1; i < arr.size(); i++) {
                    if(arr[i] == arr[i-1]) {
                        count++;
                    }
                    else {
                        occurrence.push_back(count);
                        count = 1;
                    }
               }                                                                                                    occurrence.push_back(count);
                sort(occurrence.begin(), occurrence.end());
                for(int i = 1; i < occurrence.size(); i++) {
                    if(occurrence[i] == occurrence[i-1]) {
                    return false;
                }
            }                                                                                                      return true;
        }                                                                                                         
    };