# 169. Majority Element

## Intuition
The majority element appears more than n/2 times. So if we "pair off" every occurrence
of the majority element with a different element, the majority element will always have
at least one occurrence left over. Counting votes like an election: cancel out votes
of different candidates, and the majority candidate survives at the end.

## Approach (Boyer–Moore Voting Algorithm)
1. Maintain a `candidate` and a `count`.
2. If `count == 0`, adopt the current number as the new `candidate` and set `count = 1`.
3. If current number == candidate → increment count (a matching vote).
4. Else → decrement count (a canceling vote).
5. Since majority element occurs > n/2 times, it can never be fully canceled, so it
   remains the final candidate.

## Key Observation
- Majority element occurs MORE than ⌊n/2⌋ times → every non-majority element combined
  still has fewer occurrences than the majority element.
- Pairwise cancellation guarantees majority survives. (Note: if we wanted a truly
  rigorous guarantee, we'd add a second verification pass — valid here because the
  problem guarantees a majority element exists.)

## Time Complexity
- **O(n)** — single pass through the array.

## Space Complexity
- **O(1)** — only two variables (`candidate`, `count`).

## Alternative Approaches
| Approach | Idea | Time | Space | Notes |
|---|---|---|---|---|
| Hash Map | Count frequency of each element, return the one with max freq | O(n) | O(n) | Straightforward, but extra space |
| Sorting | Sort array; element at index n/2 must be majority | O(n log n) | O(1)* | *Depends on sort implementation |
| Divide & Conquer | Majority of left or right half recurses up | O(n log n) | O(log n) | Interview discussion point |
| Bit Manipulation | For each bit position, take the majority bit across all nums | O(32n) | O(1) | Clever but rarely needed |
| Boyer–Moore ✅ | Voting/cancellation | O(n) | O(1) | Optimal in both time & space |

## Code (C++)
```
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};
```