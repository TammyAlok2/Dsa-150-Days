//link:https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

class Solution {
 public static void convertToWave(int n, int[] a) {
    for (int i = 0; i < n; i = i+2) { 
        if(i!=n-1){
        swap(a, i);
        }
    }
}

public static void swap(int[] a, int i) {
    int temp = a[i];
    a[i] = a[i+1];
    a[i+1] = temp;
}

}
