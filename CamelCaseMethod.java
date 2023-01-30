public class Solution {
    public static String camelCase(String str) {
        String buffer = "";
        String[] array = str.split(" ");	
        for (int i = 0; i < array.length; i++) {
            if (array[i].length() > 0) {
                buffer += array[i].substring(0,1).toUpperCase() + array[i].substring(1, array[i].length());
            }
        }
        return buffer;
    }
}