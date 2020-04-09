import java.util.Arrays;
import java.util.Scanner;

class Dna implements Comparable<Dna> {
    String s;
    int count; 
    Dna(String s, int count) {
        this.s = s;
        this.count = count;
    }
    @Override
    public int compareTo(Dna o){
        return count - o.count;
    }
}

class Main {
    static int count(String s) {
        final char[] LETTERS = new char [] {'A', 'C', 'G', 'T'};
        int counts[][] = new int[LETTERS.length][s.length()];
        int count = 0;
        for (int i = 0; i < LETTERS.length; i++) {
            char letter = LETTERS[i];
            int letterCount = 0;
            
            for (int j = s.length() - 1; j >= 0; j--) {
                counts[i][j]= letterCount;
                if (s.charAt(j) == letter) {
                    letterCount++;
                    for (int k = 0; k < i ; k++) {
                        count += counts[k][j];
                    }
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        while (M-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            Dna[] dna = new Dna[m];
            for (int i = 0; i < m; i++) {
                String line = sc.next();
                dna[i] = new Dna(line, count(line) * 10000 + i);
                Arrays.sort(dna);
                for (Dna d : dna) {
                    System.out.println(d.s);
                }
                if (M > 0) {
                    System.out.println();
                }
                sc.close();
            }
        }
    }
}