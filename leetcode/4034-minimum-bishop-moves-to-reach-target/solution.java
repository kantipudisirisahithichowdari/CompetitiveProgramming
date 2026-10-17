class Solution {
    public int minBishopMoves(int[] source, int[] target) {
        int e1 = source[0];
        int r1 = source[1];
        int e2 = target[0];
        int r2 = target[1];
        if(e1==e2 && r1==r2)
            return 0;
        if(Math.abs(e1-e2)==Math.abs(r1-r2))
            return 1;
        if((e1+r1)%2==(e2+r2)%2)
            return 2;

        return -1;
    }
}
