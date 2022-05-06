
/*
	Author: Amir Aghazadeh
*/

import java.util.Scanner;

public class ProblemI {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int y = scan.nextInt();

		for (int i = y + 1; ; i++) {
			String temp = String.valueOf(i);

			if (
				temp.indexOf(temp.charAt(0)) == temp.lastIndexOf(temp.charAt(0)) &&
				temp.indexOf(temp.charAt(1)) == temp.lastIndexOf(temp.charAt(1)) &&
				temp.indexOf(temp.charAt(2)) == temp.lastIndexOf(temp.charAt(2)) &&
				temp.indexOf(temp.charAt(3)) == temp.lastIndexOf(temp.charAt(3))
			) {
				System.out.println(i);
				break;
			}
		}
	}
}