class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()){
            return false ;
        }
        else {
           Map<Character, Integer> countS = new HashMap<>();
             Map<Character, Integer> countT = new HashMap<>();
             for (char c : s.toCharArray()) {
        countS.put(c, countS.getOrDefault(c, 0) + 1);
    }

    for (char c : t.toCharArray()) {
        countT.put(c, countT.getOrDefault(c, 0) + 1);
    }

    return countS.equals(countT);

        }
        
    }
}