class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
         StringBuilder cleaned = new StringBuilder();
         for (char c : s.toCharArray()) {
            if (Character.isLetterOrDigit(c)) {
                cleaned.append(c);
            }
        }
        int left = 0;
        int right = cleaned.length() - 1;

        while (left < right) {
            if (cleaned.charAt(left) != cleaned.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }

        return true;

}
}