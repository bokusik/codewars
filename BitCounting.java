public class BitCounting {
	public static int countBits(int n){
		int count = 0;
		String result = Integer.toString(n, 2);
		for (int i = 0; i < result.length(); i++) {
			if (result.charAt(i) == '1') {
				count++;
			}
		}
		return count;
	}
}