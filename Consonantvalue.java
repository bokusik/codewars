import java.util.*;
public class ConsonantValue {
    public static int subSelect(final String s) {
        int count = 0;
        String glasnie = "aeiou";
        String alphavite = "abcdefghijklmnopqrstuvwxyz";
        Map<Character, Integer> states = new HashMap<Character, Integer>();
        for (int i = 0; i < alphavite.length(); i++) { //добавляем в мапу значения
            states.put(alphavite.charAt(i), i + 1);
        }

        for (int i = 0; i < glasnie.length(); i++) { //если гласная буква
            if (states.containsKey(glasnie.charAt(i))) {
                states.remove(glasnie.charAt(i)); //удаляем
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (states.containsKey(s.charAt(i)) ) {
                count += states.get(s.charAt(i));
            }
        }
        return count;
    }

    public static int solve(final String str) {
        String value = "";
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i'
                    || str.charAt(i) == 'o' || str.charAt(i) == 'u') {
                value += " ";
            }
            else {
                value += str.charAt(i);
            }
        }

        String[] array = value.split(" ");
        List<String> list = new ArrayList<String>(Arrays.asList(array));
        for (int i = 0; i < array.length; i++) {
            if (array[i].equals("")) {
                list.remove(array[i]);
            }
        }
        array = list.toArray(new String[0]);

        for (int i = 0; i < array.length; i++) {
            int buffer = count;
            count = subSelect(array[i]);
            if (buffer > count) {
                count = buffer;
            }
        }
        return count;
    }
}