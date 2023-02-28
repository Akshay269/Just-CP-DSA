#define ll long long int
class Solution {
public:
    void solveit(string num, vector<int> sol, int index){
        if(num.length()==index and sol.size()>2){
            ans = sol;
            return;
        }
        ll number = 0;        
        
        // trying out different set of possiblites
        // "123446"
        // "1",call("23446") then "12",call("3446") then "123",call("446") and ... 
        // call for recursion in second half when number of split is more than 2
        // we check if last two splits is equal to current element or not
        // no restriction for first two possibilities
        00
        for(int i=index; i<num.size(); i++){
            number = number*10 + (num[i]-'0'); // calculating the number
            if(number>=INT_MAX) return; // number greater than int max will not be allowed
            if(num[index]=='0' && i>index) return; // handle leading zeros 
            
            // if size > 2, compare the last two series with current one
            if(sol.size()<2 || number==((ll)sol.back()+(ll)sol[sol.size()-2])){
                sol.push_back(number);
                solveit(num, sol, i+1);
                sol.pop_back(); // backtrack
            }
        }
        
    }
    vector<int> ans;
    vector<int> splitIntoFibonacci(string num) {
        vector<int> sol;
        solveit(num, sol, 0);
        
        return ans;
    }
};