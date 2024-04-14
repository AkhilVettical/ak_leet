class Solution {
public:
int timeRequiredToBuy(vector<int>& tickets, int k) {
    int time = 0;
    // Continue buying tickets until the selected queue (k) becomes empty
    while (tickets[k] > 0) {
        // Buy tickets from all queues, starting from the first
        for (int i = 0; i < tickets.size(); i++) {
            // Only buy tickets from non-empty queues
            if (tickets[i] > 0) {
                tickets[i]--; // Buy one ticket from queue i
                time++;       // Increment time
            }
            // Check if the selected queue (k) becomes empty
            if (i == k && tickets[k] == 0)
                break;
        }
    }
    return time;
}

};






