class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> duplicte = new HashSet<>();
        for (int num : nums) {
            
            if (duplicte.contains(num)) {
                return true;
            }
            
            duplicte.add(num);
        }

        
        return false;
    }
}