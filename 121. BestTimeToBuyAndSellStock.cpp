#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> prices = {7,4,6,3,1};
    int max_profit = 0;
    int min_value = prices[0];
    int max_value = prices[0];
    
    for(int i = 0; i<prices.size(); i++){
        if(prices[i] < min_value){
            min_value = prices[i];
            max_value = prices[i];
        }
        else if(prices[i] > min_value){
            int temp_profit = prices[i] - max_value;
            if(max_profit< temp_profit){
                max_profit = temp_profit;
            }
        }
    }
    cout<< max_profit;
    return 0;
}