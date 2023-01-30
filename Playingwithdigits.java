public class DigPow {
	public static long digPow(int n, int p) {
    long result = 0;
        int element = 0;
        String buffer;
        buffer = String.valueOf(n);
        if (buffer.length() > 0) {
            for (int i = 0; i < buffer.length();i++) {
                element = Character.getNumericValue(buffer.charAt(i));
                result += (long) Math.pow(element, p);
                p++;
            }
        }
        if (n > result || !(result % n == 0)) {
            return -1;
        }
        else {
            result /= n;
        }
        return result;
	}
}